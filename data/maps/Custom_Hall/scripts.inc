Custom_Hall_MapScripts::
# 2 "data/maps/Custom_Hall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Custom_Hall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/Custom_Hall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Custom_Hall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Custom_Hall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Custom_Hall/scripts.pory"
	clearflag FLAG_TEMP_1
# 4 "data/maps/Custom_Hall/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/Custom_Hall/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Custom_Hall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Custom_Hall/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, Custom_Hall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Custom_Hall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 9 "data/maps/Custom_Hall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 10 "data/maps/Custom_Hall/scripts.pory"
	msgbox Text_CustomRoom_PokemonPicked, MSGBOX_AUTOCLOSE
# 11 "data/maps/Custom_Hall/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 12 "data/maps/Custom_Hall/scripts.pory"
	setvar VAR_TEMP_5, 0
	return


Custom_Hall_Battle1::
# 18 "data/maps/Custom_Hall/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat, AfterBattle
# 19 "data/maps/Custom_Hall/scripts.pory"
	msgbox Text_CustomRoom_PokemonPicked, MSGBOX_AUTOCLOSE
	return


AfterBattle:
# 23 "data/maps/Custom_Hall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/Custom_Hall/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/Custom_Hall/scripts.pory"
	removeobject LOCALID_CUSTOM_HALL_TRAINER
# 26 "data/maps/Custom_Hall/scripts.pory"
	setflag FLAG_TEMP_1
# 27 "data/maps/Custom_Hall/scripts.pory"
	clearflag FLAG_TEMP_2
# 28 "data/maps/Custom_Hall/scripts.pory"
	addobject LOCALID_CUSTOM_HALL_OBSTACLE_1
# 29 "data/maps/Custom_Hall/scripts.pory"
	addobject LOCALID_CUSTOM_HALL_OBSTACLE_2
# 30 "data/maps/Custom_Hall/scripts.pory"
	addobject LOCALID_CUSTOM_HALL_WILDMON1
# 32 "data/maps/Custom_Hall/scripts.pory"
	setvar VAR_CUSTOM_LEVEL_CAP, 45
# 34 "data/maps/Custom_Hall/scripts.pory"
	delay 10
# 35 "data/maps/Custom_Hall/scripts.pory"
	fadescreen FADE_FROM_WHITE
	return


Custom_Hall_Encounter1::
# 39 "data/maps/Custom_Hall/scripts.pory"
	setwildbattle SPECIES_DEOXYS, 50
# 40 "data/maps/Custom_Hall/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 41 "data/maps/Custom_Hall/scripts.pory"
	delay 40
# 42 "data/maps/Custom_Hall/scripts.pory"
	waitmoncry
# 43 "data/maps/Custom_Hall/scripts.pory"
	dowildbattle
# 45 "data/maps/Custom_Hall/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 46 "data/maps/Custom_Hall/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Custom_Hall_Encounter1_2
# 49 "data/maps/Custom_Hall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/Custom_Hall/scripts.pory"
	msgbox Text_CustomRoom_PokemonPicked, MSGBOX_AUTOCLOSE
# 51 "data/maps/Custom_Hall/scripts.pory"
	setflag FLAG_TEMP_2
# 52 "data/maps/Custom_Hall/scripts.pory"
	removeobject LOCALID_CUSTOM_HALL_OBSTACLE_1
# 53 "data/maps/Custom_Hall/scripts.pory"
	removeobject LOCALID_CUSTOM_HALL_OBSTACLE_2
# 54 "data/maps/Custom_Hall/scripts.pory"
	removeobject LOCALID_CUSTOM_HALL_WILDMON1
# 55 "data/maps/Custom_Hall/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

Custom_Hall_Encounter1_2:
	return

