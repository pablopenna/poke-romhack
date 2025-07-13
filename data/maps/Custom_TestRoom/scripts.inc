Custom_TestRoom_MapScripts::
	.byte 0


Custom_TestRoom_BrockBattle::
# 5 "data/maps/Custom_TestRoom/scripts.pory"
	trainerbattle_rematch TRAINER_BROCK, TestRoom_BrockRematchIntro, TestRoom_BrockDefeat
	return


TestRoom_BrockIntro::
# 8 "data/maps/Custom_TestRoom/scripts.pory"
	.string "I'm Brock, one of Kanto's Big Eight. Be\n"
	.string "prepared to be crushed!$"

TestRoom_BrockRematchIntro::
# 12 "data/maps/Custom_TestRoom/scripts.pory"
	.string "Do you want to go again? Let's go!$"

TestRoom_BrockDefeat::
# 16 "data/maps/Custom_TestRoom/scripts.pory"
	.string "You rock!$"
