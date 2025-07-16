Custom_TestRoom_MapScripts::
	.byte 0


Custom_TestRoom_BrockBattle::
# 4 "data/maps/Custom_TestRoom/scripts.pory"
	trainerbattle_single TRAINER_BROCK, TestRoom_BrockIntro, TestRoom_BrockDefeat
	return


Custom_TestRoom_LanceBattle::
# 22 "data/maps/Custom_TestRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_LANCE, TestRoom_LanceDefeat
	return


Custom_TestRoom_GoldBattle::
# 30 "data/maps/Custom_TestRoom/scripts.pory"
	msgbox TestRoom_GoldDefeat, MSGBOX_AUTOCLOSE
# 31 "data/maps/Custom_TestRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GOLD, TestRoom_GoldDefeat
	return


Custom_TestRoom_CrystalBattle::
# 39 "data/maps/Custom_TestRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CRYSTAL, TestRoom_CrystalDefeat
	return


TestRoom_BrockIntro::
# 9 "data/maps/Custom_TestRoom/scripts.pory"
	.string "I'm Brock, one of Kanto's Big Eight. Be\n"
	.string "prepared to be crushed!$"

TestRoom_BrockRematchIntro::
# 13 "data/maps/Custom_TestRoom/scripts.pory"
	.string "Do you want to go again? Let's go!$"

TestRoom_BrockDefeat::
# 17 "data/maps/Custom_TestRoom/scripts.pory"
	.string "You rock!$"

TestRoom_LanceDefeat::
# 25 "data/maps/Custom_TestRoom/scripts.pory"
	.string "Seems like I understimated you...$"

TestRoom_GoldDefeat::
# 34 "data/maps/Custom_TestRoom/scripts.pory"
	.string "...$"

TestRoom_CrystalDefeat::
# 42 "data/maps/Custom_TestRoom/scripts.pory"
	.string "...$"
