Custom_Hoenn_Route101_MapScripts::
	.byte 0


Custom_Route101_Rocket::
# 4 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	trainerbattle_single TRAINER_INTRO_1, Text_Custom_Intro_RocketIntro, Text_Custom_Intro_RocketDefeat, AfterBattleRocketBattle
	return


AfterBattleRocketBattle:
# 8 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Text_Custom_Intro_RocketIntro::
# 12 "data/maps/Custom_Hoenn_Route101/scripts.pory"
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
# 24 "data/maps/Custom_Hoenn_Route101/scripts.pory"
	.string "Aren't you too strong for a kid? You're\n"
	.string "better than I thought.\p"
	.string "Nevermind, I'll find the way out on my\n"
	.string "own.\p"
	.string "Don't think this is over. The Team\n"
	.string "Rocket always gets what we want.$"
