Custom_Room_MapScripts::
	.byte 0


ChooseOneStarter::
# 6 "data/maps/Custom_Room/scripts.pory"
	fadescreen FADE_TO_BLACK
# 7 "data/maps/Custom_Room/scripts.pory"
	special ChooseStarter
# 8 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


AcceptPokemonA::
# 12 "data/maps/Custom_Room/scripts.pory"
	yesnobox 20, 8
# 13 "data/maps/Custom_Room/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AcceptPokemonA_1
	return

AcceptPokemonA_1:
# 14 "data/maps/Custom_Room/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues, MSGBOX_DEFAULT
# 15 "data/maps/Custom_Room/scripts.pory"
	release
	return

