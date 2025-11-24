# Poke-romhack
*Name TBD*

This romhack is based on the amazing `pokeemerald-expansion` project.

You can see the original README [here](./OG_README.md).

# Dependencies
To build the project you need to install the following depencies in your system:
```sh
sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi git libpng-dev python3
```

# Building
To build the rom, just run the following command:
```sh
make
```

To increase its speed, you can get the number of cores in your system with:
```sh
nproc
```

and provide it to the make command:
```sh
make -j$(nproc)
```

If all ran successfully, you will find the resulting rom in the root directory of the project.
It is named `pokeemerald.gba`

# Running

Load the rom in actual hardware or use an emulator. The `mGBA` core is recommended.

## RetroArch

### Setup
Install RetroArch from your package manager or download it from [here](https://www.libretro.com/download/).

You can also do it via FlatPak:
```sh
flatpak install flathub org.libretro.RetroArch
```

It is recommended to use the `mGBA` core. It should be available in the default core repos.

Once installed, it should be located under `<RetroArch_config_folder>/config/retroarch/cores/mgba_libretro.so`

### Running

You can launch RetroArch normally and load the ROM via its UI though it is recommended to do so via CLI.

```sh
retroarch -L mgba_libretro.so pokeemerald.gba
```

If you installed it via FlatPak, you can launch it with:
```sh
flatpak run org.libretro.RetroArch -L mgba_libretro.so pokeemerald.gba
```