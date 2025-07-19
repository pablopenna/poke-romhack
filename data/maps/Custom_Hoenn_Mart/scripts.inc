Custom_Hoenn_Mart_MapScripts::
	.byte 0


Custom_Hoenn_Mart_Script::
# 4 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	lock
# 5 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	pokemart Custom_Hoenn_Mart_0
# 9 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	release
	return


	.align 2
# 13 "data/maps/Custom_Hoenn_Mart/scripts.pory"
Custom_Hoenn_Mart_0:
# 14 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	.2byte ITEM_POTION
# 15 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

	.align 2
# 18 "data/maps/Custom_Hoenn_Mart/scripts.pory"
Custom_Hoenn_Mart_1:
# 19 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/Custom_Hoenn_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NONE
