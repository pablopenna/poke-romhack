Custom_Hoenn_Oldale_MapScripts::
# 2 "data/maps/Custom_Hoenn_Oldale/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Custom_Hoenn_Oldale_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Custom_Hoenn_Oldale_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Custom_Hoenn_Oldale/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Custom_Set_Dynamic_Warp_Oldale_Mart::
# 8 "data/maps/Custom_Hoenn_Oldale/scripts.pory"
	setdynamicwarp MAP_CUSTOM_HOENN_MART, 14, 7
	return


Custom_Set_Dynamic_Warp_Oldale_PokeCenter::
# 12 "data/maps/Custom_Hoenn_Oldale/scripts.pory"
	setdynamicwarp MAP_CUSTOM_HOENN_MART, 6, 17
	return

