#!/usr/bin/python3

from sys import argv
import os, subprocess, struct
from shutil import rmtree

# Prerequisite: Requires modifying fieldmap.h so these contants values match
NUM_TILES_IN_PRIMARY = 640
NUM_TILES_TOTAL = 1024
NUM_METATILES_IN_PRIMARY = 640
NUM_METATILES_TOTAL = 1024
NUM_PALS_IN_PRIMARY = 7

PATH_TO_FIRERED = os.path.join('..','..','..','pokefirered-master')
PATH_TO_EMERALD = os.path.join('..','..')
PATH_TO_TEMP = os.path.join('.','temp')

OG_METATILE_FILENAME = 'metatile_attributes.bin'
NEW_METATILE_FILENAME = 'metatile_attributes_new.bin'

# TYPES = ['primary', 'secondary']
TYPES = ['secondary']

# converts FR tile attribute .bin file to EM
def convert_from_fr_to_em(path):
    file = os.path.join(path, OG_METATILE_FILENAME)
    num = int(os.path.getsize(file) / 4)
    
    with open(file, 'rb') as f:
        new_data = bytearray(num * 2)
        data = f.read(num * 4)
        for i in range(0, num):
            behavior = data[i * 4]
                    
            new_data[i * 2] = behavior
            bg = data[i * 4 + 3]
            if bg & 0x20 == 0x20:
                bg = 0x10
            new_data[i * 2 + 1] = bg

    with open(os.sep.join([path, NEW_METATILE_FILENAME]), 'wb+') as f:
        f.write(new_data)

def setup_temp_folder():
    if not os.path.isdir(PATH_TO_TEMP):
        os.mkdir(PATH_TO_TEMP)
    
    for type in TYPES:
        path = os.path.join(PATH_TO_TEMP, type)
        if not os.path.isdir(path):
            os.mkdir(path)

def cleanup_temp_folder():
    if os.path.isdir(PATH_TO_TEMP):
        rmtree(PATH_TO_TEMP)

def copy_fr_tiles_to_temp():
    for type in TYPES:
        fr_path = os.path.join(PATH_TO_FIRERED, 'data', 'tilesets', type)
        fr_dirs = os.listdir(fr_path)
        for fr_dir in fr_dirs:
            if os.path.isfile(fr_path + '/' + fr_dir + '/tiles.png'):
                src = os.path.join(fr_path, fr_dir)
                dst = os.path.join(PATH_TO_TEMP, type, 'kanto_{}'.format(fr_dir))
                command = 'cp -a {} {}'.format(str(src), str(dst))
                print(command)
                os.system(command)

def convert_fr_tiles_in_temp():
    for type in TYPES:
        path = '{}/{}/'.format(PATH_TO_TEMP, type)
        dirs = os.listdir(path)
        for i in dirs:
            if os.path.isfile(path + i + '/tiles.png'):
                print('convert_from_fr_to_em(' + path + i + '/)')
                convert_from_fr_to_em(path + i)
                replace_og_tile_with_new(os.path.join(path,i))

def replace_og_tile_with_new(path):
    og_metadata_path = os.path.join(path, OG_METATILE_FILENAME)
    new_metadata_path = os.path.join(path, NEW_METATILE_FILENAME)
    if os.path.isfile(og_metadata_path) and os.path.isfile(new_metadata_path):
        os.remove(og_metadata_path)
        os.rename(new_metadata_path, og_metadata_path)

def copy_fr_tile_in_temp_to_emerald():
    for type in TYPES:
        temp_path = os.path.join(PATH_TO_TEMP, type)
        temp_dirs = os.listdir(temp_path)
        for temp_dir in temp_dirs:
            if os.path.isfile(os.path.join(temp_path, temp_dir, 'tiles.png')):
                src = os.path.join(temp_path, temp_dir)
                dst = os.path.join(PATH_TO_EMERALD, 'data', 'tilesets', type, temp_dir)
                command = 'cp -a {} {}'.format(str(src), str(dst))
                print(command)
                os.system(command)


def main():
    setup_temp_folder()
    copy_fr_tiles_to_temp()
    convert_fr_tiles_in_temp()
    copy_fr_tile_in_temp_to_emerald()
    cleanup_temp_folder()

main()
