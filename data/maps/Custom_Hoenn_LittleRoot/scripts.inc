Custom_Hoenn_LittleRoot_MapScripts::
# 4 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Custom_Hoenn_LittleRoot_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Custom_Hoenn_LittleRoot_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	setvar VAR_TEMP_0, FALSE
# 6 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	goto_if_unset FLAG_SET_WALL_CLOCK, Custom_Hoenn_LittleRoot_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Custom_Hoenn_LittleRoot_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	setvar VAR_TEMP_0, TRUE
	return


Custom_LittleRoot_PlayerReflection::
# 13 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 14 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER_REFLECTION, Custom_LittleRoot_PlayerReflection_Movement_0
# 17 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_PlayerReflection, MSGBOX_AUTOCLOSE
# 18 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER_REFLECTION, Custom_LittleRoot_PlayerReflection_Movement_1
# 21 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playbgm MUS_LITTLEROOT, FALSE
	return


Custom_LittleRoot_LittleKid_Event_Left::
# 25 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	lockall
# 26 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_LittleKid_Event_Left_Movement_0
# 30 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playse SE_PIN
# 31 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	call Custom_LittleRoot_LittleKid
# 32 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_LittleKid_Event_Left_Movement_1
# 35 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_LittleRoot_LittleKid_Event_Left_Movement_2
# 38 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	waitmovement
# 39 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	releaseall
	return


Custom_LittleRoot_LittleKid_Event_Right::
# 43 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	lockall
# 44 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_LittleKid_Event_Right_Movement_0
# 49 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playse SE_PIN
# 50 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	waitmovement
# 51 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	call Custom_LittleRoot_LittleKid
# 52 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_LittleKid_Event_Right_Movement_1
# 56 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_LittleRoot_LittleKid_Event_Left_Movement_2
# 59 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	waitmovement
# 60 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	releaseall
	return


Custom_LittleRoot_LittleKid::
# 64 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_PlayerReflection_Movement_0
# 67 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne Custom_LittleRoot_LittleKid_1
# 70 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_LittleKid, MSGBOX_AUTOCLOSE
	return

Custom_LittleRoot_LittleKid_1:
# 68 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_LittleKid_Event, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_PlayerHouseSign::
# 75 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Player_House, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_RivalHouseSign::
# 79 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Rival_House, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_RivalHouseDoor::
# 83 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Rival_House_Door, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_LabSign::
# 87 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Lab, MSGBOX_AUTOCLOSE
	return


# 14 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_PlayerReflection_Movement_0:
# 15 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_player
	step_end

# 18 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_PlayerReflection_Movement_1:
# 19 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_up
	step_end

# 26 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Left_Movement_0:
# 27 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_right
# 28 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	emote_exclamation_mark
	step_end

# 32 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Left_Movement_1:
# 33 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_down
	step_end

# 35 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Left_Movement_2:
# 36 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	walk_down
	step_end

# 44 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Right_Movement_0:
# 45 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_right
# 46 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	emote_exclamation_mark
# 47 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	walk_right
	step_end

# 52 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_LittleKid_Event_Right_Movement_1:
# 53 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	walk_left
# 54 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_down
	step_end

Text_Custom_LittleRoot_PlayerReflection::
# 90 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "You remember how this goes, don't you?$"

Text_Custom_LittleRoot_LittleKid::
# 94 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "You're late again… weren't you?\n"
	.string "No… I think you were early.$"

Text_Custom_LittleRoot_LittleKid_Event::
# 98 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The clock in your room isn't right.\p"
	.string "It stopped after you left… You should\n"
	.string "fix it.$"

Text_Custom_LittleRoot_Sign_Lab::
# 105 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The sign says: 'Pokémon Lab.' But you're\n"
	.string "not sure that's what it really is.$"

Text_Custom_LittleRoot_Sign_Player_House::
# 109 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The sign says that… you live here? That\n"
	.string "can't be right.$"

Text_Custom_LittleRoot_Sign_Rival_House::
# 113 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The text in the sign is smudged.$"

Text_Custom_LittleRoot_Rival_House_Door::
# 117 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The handle is cold. You let go.$"
