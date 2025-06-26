Custom_Hall_MapScripts::
	.byte 0


Custom_Hall_Battle1::
# 4 "data/maps/Custom_Hall/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 5 "data/maps/Custom_Hall/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	return

