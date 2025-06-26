Custom_Room_MapScripts::
# 2 "data/maps/Custom_Room/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Custom_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Custom_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


Custom_Room_TakePokemonA::
# 21 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KANGASKHAN
# 22 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_A
# 23 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonB::
# 27 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HERACROSS
# 28 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_B
# 29 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonC::
# 33 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABSOL
# 34 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_C
# 35 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonRandom::
# 40 "data/maps/Custom_Room/scripts.pory"
	random NUM_SPECIES
# 41 "data/maps/Custom_Room/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
	return


AcceptPokemon:
# 45 "data/maps/Custom_Room/scripts.pory"
	goto_if_set FLAG_CUSTOM_RECEIVED_STARTER, AcceptPokemon_2
# 50 "data/maps/Custom_Room/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 51 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_DoYouWantThisPokemon, MSGBOX_YESNO
# 52 "data/maps/Custom_Room/scripts.pory"
	hidemonpic
# 53 "data/maps/Custom_Room/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AcceptPokemon_5
AcceptPokemon_4:
# 60 "data/maps/Custom_Room/scripts.pory"
	release
	return

AcceptPokemon_2:
# 46 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_CannotDoThat, MSGBOX_AUTOCLOSE
	return

AcceptPokemon_5:
# 54 "data/maps/Custom_Room/scripts.pory"
	givemon VAR_TEMP_1, 20
# 55 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_PokemonPicked, MSGBOX_DEFAULT
# 57 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_CUSTOM_RECEIVED_STARTER
# 58 "data/maps/Custom_Room/scripts.pory"
	removeobject VAR_TEMP_2
	goto AcceptPokemon_4


Text_CustomRoom_DoYouWantThisPokemon::
# 63 "data/maps/Custom_Room/scripts.pory"
	.string "Do I want this Pokémon?$"

Text_CustomRoom_PokemonPicked::
# 67 "data/maps/Custom_Room/scripts.pory"
	.string "It is done.$"

Text_CustomRoom_CannotDoThat::
# 71 "data/maps/Custom_Room/scripts.pory"
	.string "I cannot do that.$"
