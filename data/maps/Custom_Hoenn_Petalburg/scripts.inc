Custom_Hoenn_Petalburg_MapScripts::
# 2 "data/maps/Custom_Hoenn_Petalburg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Custom_Hoenn_Petalburg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Custom_Hoenn_Petalburg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Custom_Hoenn_Petalburg/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Custom_Set_Dynamic_Warp_Petalburg_Mart::
# 8 "data/maps/Custom_Hoenn_Petalburg/scripts.pory"
	setdynamicwarp MAP_CUSTOM_HOENN_MART, 25, 13
	return


Custom_Set_Dynamic_Warp_Petalburg_PokeCenter::
# 12 "data/maps/Custom_Hoenn_Petalburg/scripts.pory"
	setdynamicwarp MAP_CUSTOM_HOENN_MART, 20, 17
	return

