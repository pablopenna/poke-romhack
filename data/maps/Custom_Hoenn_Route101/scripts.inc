Custom_Hoenn_Route101_MapScripts::
	.byte 0


Custom_Route101_Rocket::
# 4 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	trainerbattle_single TRAINER_INTRO_1, Text_Custom_Intro_RocketIntro, Text_Custom_Intro_RocketDefeat, AfterBattleRocketBattle
	return


Custom_Route101_MartEmployee::
# 8 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	lock
# 9 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCAL_ID_MARTEMPLOYEE, Custom_Route101_MartEmployee_Movement_0
# 12 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	goto_if_unset FLAG_CUSTOM_RECEIVED_SAMPLE_ROUTE_101, Custom_Route101_MartEmployee_2
Custom_Route101_MartEmployee_1:
# 20 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	msgbox Text_Custom_Route101_MartEmployee2, MSGBOX_AUTOCLOSE
# 21 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	release
	return

Custom_Route101_MartEmployee_2:
# 13 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	msgbox Text_Custom_Route101_MartEmployee1, MSGBOX_AUTOCLOSE
# 14 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	giveitem ITEM_POKE_BALL, 20
# 15 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	applymovement LOCAL_ID_MARTEMPLOYEE, Custom_Route101_MartEmployee_Movement_0
# 18 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setflag FLAG_CUSTOM_RECEIVED_SAMPLE_ROUTE_101
	goto Custom_Route101_MartEmployee_1


AfterBattleRocketBattle:
# 25 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	msgbox Text_Custom_Intro_RocketDefeat2, MSGBOX_AUTOCLOSE
# 26 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	setflag FLAG_CUSTOM_INTRO_ROCKET_DEFEATED
# 28 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	playse SE_EXIT
# 29 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	removeobject LOCALID_ROCKET
# 30 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 9 "data/maps/Custom_Hoenn_Route101/scripts.pory"
Custom_Route101_MartEmployee_Movement_0:
# 10 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	face_player
	step_end

Text_Custom_Intro_RocketIntro::
# 33 "data/maps/Custom_Hoenn_Route101/scripts.pory"
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
# 45 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "Aren't you too strong for a kid? You're\n"
	.string "better than I thought.$"

Text_Custom_Intro_RocketDefeat2::
# 53 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "Nevermind, I'll find the way out on my\n"
	.string "own.\p"
	.string "Don't think this is over. The Team\n"
	.string "Rocket always gets what they want!$"

Text_Custom_Route101_MartEmployee1::
# 60 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "Oh! Finally! A potential customer! I\n"
	.string "haven't seen any in a long time.\p"
	.string "Here, take this. On the house!$"

Text_Custom_Route101_MartEmployee2::
# 67 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "When you get the chance, check out one\n"
	.string "of our stores! We're always open!$"
