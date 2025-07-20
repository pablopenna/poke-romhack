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
	return


Custom_Hoenn_Petalburg_Gym_Norman_FaceAway::
# 67 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_set FLAG_CUSTOM_SPOKE_NORMAN_INTRO, Custom_Hoenn_Petalburg_Gym_Norman_FaceAway_1
	return

Custom_Hoenn_Petalburg_Gym_Norman_FaceAway_1:
# 68 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_FaceAway_Movement_0
# 71 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 72 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	releaseall
	return


Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition:
# 77 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_3, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_1
# 85 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_2
# 92 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_2, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_3
	return

Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_1:
# 78 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_0
# 84 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
	return

Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_2:
# 86 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_1
# 91 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
	return

Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_3:
# 93 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_2
# 98 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
	return


Custom_Hoenn_Petalburg_Gym_Norman_Play_Intro:
# 103 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	call Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition
# 105 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro, MSGBOX_AUTOCLOSE
# 106 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement1
# 107 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 109 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro2, MSGBOX_AUTOCLOSE
# 110 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement2
# 111 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 113 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro3, MSGBOX_AUTOCLOSE
# 114 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement3
# 115 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 117 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro4, MSGBOX_AUTOCLOSE
	return


Custom_Hoenn_Petalburg_Gym_Norman_OnNotEnoughBadges:
# 121 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_OnNotEnoughBadges_Movement_0
# 126 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	waitmovement
# 127 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Text_Custom_Hoenn_Petalburg_Gym_Norman_NotEnoughBadges, MSGBOX_AUTOCLOSE
	return


Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges:
# 131 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges_Movement_0
# 134 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	msgbox Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges_Text_0, MSGBOX_AUTOCLOSE
	return


# 141 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement1:
# 142 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_player
# 143 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	lock_facing_direction
# 144 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	emote_exclamation_mark
# 145 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_up
# 146 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 146 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 146 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 146 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 147 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
	step_end

# 163 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement2:
# 164 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_player
# 165 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	lock_facing_direction
# 166 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_up
# 167 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
	step_end

# 176 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_Intro_Movement3:
# 177 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	unlock_facing_direction
# 178 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_away_player
	step_end

# 68 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_FaceAway_Movement_0:
# 69 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_away_player
	step_end

# 78 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_0:
# 79 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_left
# 80 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
# 80 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
# 81 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_right
# 82 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_up
	step_end

# 86 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_1:
# 87 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
# 88 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_right
# 89 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_up
	step_end

# 93 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Intro_AdjustPlayerPosition_Movement_2:
# 94 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_down
# 95 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	walk_left
# 96 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_up
	step_end

# 121 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_OnNotEnoughBadges_Movement_0:
# 122 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_player
# 123 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 123 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	delay_16
# 124 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_away_player
	step_end

# 131 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges_Movement_0:
# 132 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	face_player
	step_end

Custom_Hoenn_Petalburg_Gym_Norman_OnEnoughBadges_Text_0:
# 134 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "Damn son!$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro::
# 137 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "Welcome to the Petalburg's Gym.\p"
	.string "...\p"
	.string "Is it... you?$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro2::
# 150 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
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
# 170 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "You're not my son, are you?$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_Intro4::
# 181 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "Forget what I said. It doesn't matter.$"

Text_Custom_Hoenn_Petalburg_Gym_Norman_NotEnoughBadges::
# 187 "data/maps/Custom_Hoenn_Petalburg_Gym/scripts.pory"
	.string "I can see you don't have any badges\n"
	.string "yet. Come back when you have four.$"
