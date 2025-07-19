Custom_Hoenn_LittleRoot_MapScripts::
# 5 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Custom_Hoenn_LittleRoot_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Custom_Hoenn_LittleRoot_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	setvar VAR_TEMP_0, FALSE
# 7 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	goto_if_unset FLAG_SET_WALL_CLOCK, Custom_Hoenn_LittleRoot_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Custom_Hoenn_LittleRoot_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	setvar VAR_TEMP_0, TRUE
	return


Custom_LittleRoot_PlayerReflection::
# 14 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 15 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER_REFLECTION, Custom_LittleRoot_PlayerReflection_Movement_0
# 18 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_PlayerReflection, MSGBOX_AUTOCLOSE
# 19 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER_REFLECTION, Custom_LittleRoot_PlayerReflection_Movement_1
# 22 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playbgm MUS_LITTLEROOT, FALSE
# 23 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	setflag FLAG_CUSTOM_HOENN_LITTLEROOT_HIDE_REFLECTION
	return


Custom_LittleRoot_LittleKid_Event_Left::
# 27 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	lockall
# 28 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_LittleKid_Event_Left_Movement_0
# 32 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playse SE_PIN
# 33 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	call Custom_LittleRoot_LittleKid
# 34 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_LittleKid_Event_Left_Movement_1
# 37 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_LittleRoot_LittleKid_Event_Left_Movement_2
# 40 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	waitmovement
# 41 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	releaseall
	return


Custom_LittleRoot_LittleKid_Event_Right::
# 45 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	lockall
# 46 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_LittleKid_Event_Right_Movement_0
# 51 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playse SE_PIN
# 52 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	waitmovement
# 53 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	call Custom_LittleRoot_LittleKid
# 54 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_LittleKid_Event_Right_Movement_1
# 58 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_LittleRoot_LittleKid_Event_Left_Movement_2
# 61 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	waitmovement
# 62 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	releaseall
	return


Custom_LittleRoot_LittleKid::
# 66 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_PlayerReflection_Movement_0
# 69 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne Custom_LittleRoot_LittleKid_1
# 72 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_LittleKid, MSGBOX_AUTOCLOSE
	return

Custom_LittleRoot_LittleKid_1:
# 70 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_LittleKid_Event, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_PlayerHouseSign::
# 77 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Player_House, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_RivalHouseSign::
# 81 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Rival_House, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_RivalHouseDoor::
# 85 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Rival_House_Door, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_LabSign::
# 89 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Lab, MSGBOX_AUTOCLOSE
	return


# 15 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_PlayerReflection_Movement_0:
# 16 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_player
	step_end

# 19 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_PlayerReflection_Movement_1:
# 20 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_up
	step_end

# 28 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Left_Movement_0:
# 29 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_right
# 30 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	emote_exclamation_mark
	step_end

# 34 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Left_Movement_1:
# 35 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_down
	step_end

# 37 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Left_Movement_2:
# 38 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	walk_down
	step_end

# 46 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Right_Movement_0:
# 47 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_right
# 48 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Right_Movement_1:
# 55 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	walk_left
# 56 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_down
	step_end

Text_Custom_LittleRoot_PlayerReflection::
# 92 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "You remember how this goes, don't you?$"

Text_Custom_LittleRoot_LittleKid::
# 96 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "You're late again… weren't you?\n"
	.string "No… I think you were early.$"

Text_Custom_LittleRoot_LittleKid_Event::
# 100 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The clock in your room isn't right.\p"
	.string "It stopped after you left… You should\n"
	.string "fix it.$"

Text_Custom_LittleRoot_Sign_Lab::
# 107 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The sign says: 'Pokémon Lab.' But you're\n"
	.string "not sure that's what it really is.$"

Text_Custom_LittleRoot_Sign_Player_House::
# 111 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The sign says that… you live here? That\n"
	.string "can't be right.$"

Text_Custom_LittleRoot_Sign_Rival_House::
# 115 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The text in the sign is smudged.$"

Text_Custom_LittleRoot_Rival_House_Door::
# 119 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The handle is cold. You let go.$"
