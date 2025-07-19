Custom_Hoenn_Route101_MapScripts::
# 5 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Custom_Hoenn_Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Custom_Hoenn_Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setvar VAR_TEMP_0, FALSE
# 7 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	goto_if_unset FLAG_CUSTOM_INTRO_ROCKET_DEFEATED, Custom_Hoenn_Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Custom_Hoenn_Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setvar VAR_TEMP_0, TRUE
	return


Custom_Route101_MartEmployee::
# 14 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	lock
# 15 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCAL_ID_MARTEMPLOYEE, Custom_Route101_MartEmployee_Movement_0
# 18 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	goto_if_unset FLAG_CUSTOM_RECEIVED_SAMPLE_ROUTE_101, Custom_Route101_MartEmployee_2
Custom_Route101_MartEmployee_1:
# 27 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	msgbox Text_Custom_Route101_MartEmployee2, MSGBOX_AUTOCLOSE
# 28 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	release
	return

Custom_Route101_MartEmployee_2:
# 19 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	msgbox Text_Custom_Route101_MartEmployee1, MSGBOX_AUTOCLOSE
# 20 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	giveitem ITEM_POKE_BALL, 20
# 22 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCAL_ID_MARTEMPLOYEE, Custom_Route101_MartEmployee_Movement_0
# 25 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setflag FLAG_CUSTOM_RECEIVED_SAMPLE_ROUTE_101
	goto Custom_Route101_MartEmployee_1


Custom_Route101_Rocket_Left::
# 32 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setvar VAR_TEMP_1, FALSE
# 33 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	call Custom_Route101_Rocket
	return


Custom_Route101_Rocket_Right::
# 37 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setvar VAR_TEMP_1, TRUE
# 38 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	call Custom_Route101_Rocket
	return


Custom_Route101_Rocket:
# 42 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	lockall
# 43 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setvar VAR_TEMP_0, FALSE
# 45 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	delay 20
# 46 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCALID_ROCKET, Custom_Route101_Rocket_Movement_0
# 49 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	waitmovement
# 50 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	delay 20
# 51 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Route101_Rocket_Movement_1
# 55 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	playse SE_PIN
# 56 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	waitmovement
# 58 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 60 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCALID_ROCKET, Custom_Route101_Rocket_Movement_2
# 63 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	waitmovement
# 64 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_ne Custom_Route101_Rocket_2
Custom_Route101_Rocket_1:
# 76 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	msgbox Text_Custom_Intro_RocketIntro, MSGBOX_AUTOCLOSE
# 78 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_INTRO_1, Text_Custom_Intro_RocketDefeat
# 80 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	msgbox Text_Custom_Intro_RocketDefeat2, MSGBOX_AUTOCLOSE
# 81 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setflag FLAG_CUSTOM_INTRO_ROCKET_DEFEATED
# 83 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	playse SE_EXIT
# 84 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	removeobject LOCALID_ROCKET
# 85 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	delay 10
# 86 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	releaseall
	return

Custom_Route101_Rocket_2:
# 65 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCALID_ROCKET, Custom_Route101_Rocket_Movement_3
# 70 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	waitmovement
# 71 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Route101_Rocket_Movement_4
# 74 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	waitmovement
	goto Custom_Route101_Rocket_1


# 15 "data/maps/Custom_Hoenn_Route101/scripts.pory"
Custom_Route101_MartEmployee_Movement_0:
# 16 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	face_player
	step_end

# 46 "data/maps/Custom_Hoenn_Route101/scripts.pory"
Custom_Route101_Rocket_Movement_0:
# 47 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	face_down
	step_end

# 51 "data/maps/Custom_Hoenn_Route101/scripts.pory"
Custom_Route101_Rocket_Movement_1:
# 52 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	face_up
# 53 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	emote_exclamation_mark
	step_end

# 60 "data/maps/Custom_Hoenn_Route101/scripts.pory"
Custom_Route101_Rocket_Movement_2:
# 61 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	walk_down
# 61 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	walk_down
# 61 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/Custom_Hoenn_Route101/scripts.pory"
Custom_Route101_Rocket_Movement_3:
# 66 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	walk_down
# 67 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	walk_in_place_fast_right
# 68 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	face_player
	step_end

# 71 "data/maps/Custom_Hoenn_Route101/scripts.pory"
Custom_Route101_Rocket_Movement_4:
# 72 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	walk_in_place_fast_left
	step_end

Text_Custom_Intro_RocketIntro::
# 90 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "Hey... I was supposed to be stealing\n"
	.string "Pokémon for my boss, but I got lost.\p"
	.string "This place... it's not like anything I've\n"
	.string "seen before.\p"
	.string "Maybe you can help me find my way out?\n"
	.string "I don't want to get caught wandering\l"
	.string "here forever\p"
	.string "...\n"
	.string "...\p"
	.string "Wait a minute. You're a trainer, aren't\n"
	.string "you?\p"
	.string "Well, then... I guess I don't need your\n"
	.string "help. I'm here to take your Pokémon too!$"

Text_Custom_Intro_RocketDefeat::
# 102 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "Aren't you too strong for a kid? You're\n"
	.string "better than I thought.$"

Text_Custom_Intro_RocketDefeat2::
# 108 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "Nevermind, I'll find the way out on my\n"
	.string "own.\p"
	.string "Don't think this is over. The Team\n"
	.string "Rocket always gets what they want!$"

Text_Custom_Route101_MartEmployee1::
# 115 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "Oh! Finally! A potential customer! I\n"
	.string "haven't seen any in a long time.\p"
	.string "Here, take this. On the house!$"

Text_Custom_Route101_MartEmployee2::
# 122 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "When you get the chance, check out one\n"
	.string "of our stores! We're always open!$"
