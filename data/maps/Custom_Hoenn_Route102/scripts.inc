Custom_Hoenn_Route102_MapScripts::
	.byte 0


Custom_Hoenn_Route102_Trainer::
# 4 "data/maps/Custom_Hoenn_Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Text_Custom_Route102_TrainerIntro, Text_Custom_Route102_TrainerDefeat
# 5 "data/maps/Custom_Hoenn_Route102/scripts.pory"
	msgbox Text_Custom_Route102_TrainerAfterBattle, MSGBOX_AUTOCLOSE
	return


Text_Custom_Route102_TrainerIntro::
# 8 "data/maps/Custom_Hoenn_Route102/scripts.pory"
	.string "Oh… A challenger? It's been so long\n"
	.string "since someone walked this path.$"

Text_Custom_Route102_TrainerDefeat::
# 12 "data/maps/Custom_Hoenn_Route102/scripts.pory"
	.string "Some things never change.$"

Text_Custom_Route102_TrainerAfterBattle::
# 16 "data/maps/Custom_Hoenn_Route102/scripts.pory"
	.string "I used to train every day, waiting for\n"
	.string "the next battle.\p"
	.string "Then the days stopped. I just stayed\n"
	.string "here.$"
