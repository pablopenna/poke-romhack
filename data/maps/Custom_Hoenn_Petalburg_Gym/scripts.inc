# 1 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"

# 2 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
.include "data/scripts/get_badge_number.inc"

Custom_Hoenn_Petalburg_Gym_MapScripts::
# 12 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Custom_Hoenn_Petalburg_Gym_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Custom_Hoenn_Petalburg_Gym_MapScripts_MAP_SCRIPT_ON_LOAD:
# 13 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Custom_Hoenn_Petalburg_Gym_Norman::
# 18 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_unset FLAG_CUSTOM_SPOKE_NORMAN_INTRO, Custom_Hoenn_Petalburg_Gym_Norman_2
Custom_Hoenn_Petalburg_Gym_Norman_1:
# 23 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	call CommonGetBadgeNumber
# 24 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt Custom_Hoenn_Petalburg_Gym_Norman_4
# 27 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	call Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges
	return

Custom_Hoenn_Petalburg_Gym_Norman_2:
# 19 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	call Custom_Hoenn_Petalburg_Gym_Norman_Play_Intro
# 20 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_CUSTOM_SPOKE_NORMAN_INTRO
	goto Custom_Hoenn_Petalburg_Gym_Norman_1

Custom_Hoenn_Petalburg_Gym_Norman_4:
# 25 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	call Custom_Hoenn_Petalburg_Gym_Norman_OnNotEnoughBadges
	return


Custom_Hoenn_Petalburg_Gym_OnNormanLeft::
# 32 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_TEMP_1
# 33 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_2
# 34 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_3
# 35 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_4
	return


Custom_Hoenn_Petalburg_Gym_OnNormanRight::
# 39 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 40 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_TEMP_2
# 41 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_3
# 42 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_4
	return


Custom_Hoenn_Petalburg_Gym_OnNormanTop::
# 46 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 47 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_2
# 48 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_TEMP_3
# 49 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_4
	return


Custom_Hoenn_Petalburg_Gym_OnNormanBottom::
# 53 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 54 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_2
# 55 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	clearflag FLAG_TEMP_3
# 56 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_TEMP_4
	return


Custom_Hoenn_Petalburg_Gym_TestGetBadges::
# 60 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 61 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 62 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 63 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 64 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
	return


Custom_Hoenn_Petalburg_Gym_Norman_FaceAway::
# 68 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_set FLAG_CUSTOM_SPOKE_NORMAN_INTRO, Custom_Hoenn_Petalburg_Gym_Norman_FaceAway_1
	return

Custom_Hoenn_Petalburg_Gym_Norman_FaceAway_1:
# 69 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_FaceAway_Movement_0
# 72 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 73 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	releaseall
	return


Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition:
# 78 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_3, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_1
# 86 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_2
# 93 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_2, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_3
	return

Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_1:
# 79 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_0
# 85 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
	return

Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_2:
# 87 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_1
# 92 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
	return

Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_3:
# 94 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_2
# 99 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
	return


Custom_Hoenn_Petalburg_Gym_Norman_Play_Intro:
# 104 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	call Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition
# 106 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro, MSGBOX_AUTOCLOSE
# 107 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement1
# 108 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 110 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro2, MSGBOX_AUTOCLOSE
# 111 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement2
# 112 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 114 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro3, MSGBOX_AUTOCLOSE
# 115 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement3
# 116 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 118 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro4, MSGBOX_AUTOCLOSE
	return


Custom_Hoenn_Petalburg_Gym_Norman_OnNotEnoughBadges:
# 122 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_OnNotEnoughBadges_Movement_0
# 127 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 128 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_NotEnoughBadges, MSGBOX_AUTOCLOSE
	return


Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges:
# 132 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges_Movement_0
# 135 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges_Text_0, MSGBOX_AUTOCLOSE
	return


# 142 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement1:
# 143 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_player
# 144 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	lock_facing_direction
# 145 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	emote_exclamation_mark
# 146 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_up
# 147 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 147 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 147 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 147 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 148 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
	step_end

# 164 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement2:
# 165 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_player
# 166 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	lock_facing_direction
# 167 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_up
# 168 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
	step_end

# 177 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement3:
# 178 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	unlock_facing_direction
# 179 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_away_player
	step_end

# 69 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_FaceAway_Movement_0:
# 70 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_away_player
	step_end

# 79 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_0:
# 80 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_left
# 81 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
# 81 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
# 82 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_right
# 83 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_up
	step_end

# 87 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_1:
# 88 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
# 89 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_right
# 90 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_up
	step_end

# 94 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_2:
# 95 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
# 96 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_left
# 97 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_up
	step_end

# 122 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_OnNotEnoughBadges_Movement_0:
# 123 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_player
# 124 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 124 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 125 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_away_player
	step_end

# 132 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges_Movement_0:
# 133 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_player
	step_end

Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges_Text_0:
# 135 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "Damn son!$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro::
# 138 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "Welcome to the Petalburg's Gym.\p"
	.string "...\p"
	.string "Is it... you?$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro2::
# 151 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "Oh! Son! I've missed you so much. It's\n"
	.string "been so long!\p"
	.string "Where have you been? What have you\n"
	.string "been doing all this time?\p"
	.string "Since you became Champion we haven't\n"
	.string "heard anything from you.\p"
	.string "How long has it been since then?\p"
	.string "...\p"
	.string "Listen... your mom... I...\p"
	.string "...\p"
	.string "Don't worry. Now that you're back,\n"
	.string "everything will be okay.$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro3::
# 171 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "You're not my son, are you?$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro4::
# 182 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "Forget what I said. It doesn't matter.$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_NotEnoughBadges::
# 188 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "I can see you don't have any badges\n"
	.string "yet. Come back when you have four.$"
