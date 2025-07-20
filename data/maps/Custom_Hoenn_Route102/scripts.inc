Custom_Hoenn_Route102_MapScripts::
	.byte 0


Custom_Hoenn_Route102_Trainer::
# 4 "data/maps/Custom_Hoenn_Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 5 "data/maps/Custom_Hoenn_Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	return

