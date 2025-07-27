Custom_Hoenn_PetalburgWoods_MapScripts::
# 7 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Custom_Hoenn_PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Custom_Hoenn_PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_1, 0
# 9 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	goto_if_unset FLAG_CUSTOM_PETALBURGWOODS_AMBUSH, Custom_Hoenn_PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Custom_Hoenn_PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Custom_Hoenn_PetalburgWoods_Ambush_PlayerOnLeft::
# 16 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_1
# 17 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	call Custom_Hoenn_PetalburgWoods_Ambush
	return


Custom_Hoenn_PetalburgWoods_Ambush_PlayerOnRight::
# 21 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 22 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	call Custom_Hoenn_PetalburgWoods_Ambush
	return


Custom_Hoenn_PetalburgWoods_Ambush:
# 26 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	lockall
# 27 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_PetalburgWoods_Ambush_Movement_0
# 28 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	playse SE_PIN
# 29 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	waitmovement LOCALID_PLAYER
# 32 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, Custom_Hoenn_PetalburgWoods_Ambush_2
# 36 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	applymovement LOCALID_BUGCATCHER_RIGHT, RightNPCMovement_Approach_Adjust
Custom_Hoenn_PetalburgWoods_Ambush_1:
# 38 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	waitmovement LOCALID_BUGCATCHER_LEFT
# 39 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	waitmovement LOCALID_BUGCATCHER_MIDDLE
# 40 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	waitmovement LOCALID_BUGCATCHER_RIGHT
# 42 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	applymovement LOCALID_BUGCATCHER_LEFT, LeftNPCMovement_Approach
# 43 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	applymovement LOCALID_BUGCATCHER_MIDDLE, MiddleNPCMovement_Approach
# 44 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	applymovement LOCALID_BUGCATCHER_RIGHT, RightNPCMovement_Approach
# 46 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	waitmovement LOCALID_BUGCATCHER_LEFT
# 47 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	waitmovement LOCALID_BUGCATCHER_MIDDLE
# 48 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	waitmovement LOCALID_BUGCATCHER_RIGHT
# 51 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	msgbox Text_Custom_Hoenn_PetalburgWoods_Ambush1, MSGBOX_AUTOCLOSE
# 52 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVIS, Text_Custom_Hoenn_PetalburgWoods_Ambush_LoseBattle1
# 53 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	msgbox Text_Custom_Hoenn_PetalburgWoods_Ambush_AfterBattle1, MSGBOX_AUTOCLOSE
# 54 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVIS, Text_Custom_Hoenn_PetalburgWoods_Ambush_LoseBattle2
# 55 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	msgbox Text_Custom_Hoenn_PetalburgWoods_Ambush_AfterBattle2, MSGBOX_AUTOCLOSE
# 56 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVIS, Text_Custom_Hoenn_PetalburgWoods_Ambush_LoseBattle3
# 57 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	msgbox Text_Custom_Hoenn_PetalburgWoods_Ambush_AfterBattle3, MSGBOX_AUTOCLOSE
# 60 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	applymovement LOCALID_BUGCATCHER_MIDDLE, MiddleNPCMovement_GiveWay
# 61 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	waitmovement LOCALID_BUGCATCHER_MIDDLE
# 63 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	setflag FLAG_CUSTOM_PETALBURGWOODS_AMBUSH
# 64 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	releaseall
	return

Custom_Hoenn_PetalburgWoods_Ambush_2:
# 33 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	applymovement LOCALID_BUGCATCHER_LEFT, LeftNPCMovement_Approach_Adjust
# 34 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	applymovement LOCALID_BUGCATCHER_MIDDLE, MiddleNPCMovement_Approach_Adjust
	goto Custom_Hoenn_PetalburgWoods_Ambush_1


# 113 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
LeftNPCMovement_Approach:
# 114 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
# 114 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
# 114 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
# 114 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
# 114 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
# 114 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
# 114 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
	step_end

# 117 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
MiddleNPCMovement_Approach:
# 118 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_down
# 118 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_down
# 118 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_down
# 118 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_down
# 118 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 121 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
RightNPCMovement_Approach:
# 122 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
# 122 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
# 122 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
# 122 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
# 122 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
# 122 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
# 122 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
	step_end

# 125 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
LeftNPCMovement_Approach_Adjust:
# 126 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
	step_end

# 129 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
MiddleNPCMovement_Approach_Adjust:
# 130 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_right
	step_end

# 133 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
RightNPCMovement_Approach_Adjust:
# 134 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
	step_end

# 137 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
MiddleNPCMovement_GiveWay:
# 138 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	walk_left
# 139 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	face_right
	step_end

# 27 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
Custom_Hoenn_PetalburgWoods_Ambush_Movement_0:
# 27 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	face_up
# 27 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	emote_exclamation_mark
	step_end

Text_Custom_Hoenn_PetalburgWoods_Ambush1::
# 67 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	.string "Hey. Stop right there. You're not from\n"
	.string "around here, are you?\p"
	.string "This part of the forest isn't for\n"
	.string "outsiders.\p"
	.string "Trainers like you just... disappear. Turn\n"
	.string "back, or you'll face the consequences\p"
	.string "...\n"
	.string "Fine. We'll do it the old way. I go first.$"

Text_Custom_Hoenn_PetalburgWoods_Ambush_LoseBattle1::
# 77 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	.string "Tch... You got lucky.$"

Text_Custom_Hoenn_PetalburgWoods_Ambush_AfterBattle1::
# 83 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	.string "My turn.$"

Text_Custom_Hoenn_PetalburgWoods_Ambush_LoseBattle2::
# 89 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	.string "You're tougher than you look. Still it\n"
	.string "doesn't mean you belong here.$"

Text_Custom_Hoenn_PetalburgWoods_Ambush_AfterBattle2::
# 95 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	.string "I'll finish this.$"

Text_Custom_Hoenn_PetalburgWoods_Ambush_LoseBattle3::
# 101 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	.string "Hmph... fine.$"

Text_Custom_Hoenn_PetalburgWoods_Ambush_AfterBattle3::
# 107 "data/maps/Custom_Hoenn_PetalburgWoods/scripts.pory"
	.string "Next time, we won't hold back. Get lost.$"
