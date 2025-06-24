Custom_Room_MapScripts::
# 2 "data/maps/Custom_Room/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Custom_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Custom_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


Custom_Room_TakePokemonA::
# 23 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KANGASKHAN
# 24 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_A
# 25 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonB::
# 29 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HERACROSS
# 30 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_B
# 31 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonC::
# 35 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABSOL
# 36 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_C
# 37 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonRandom::
# 42 "data/maps/Custom_Room/scripts.pory"
	random NUM_SPECIES
# 43 "data/maps/Custom_Room/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
	return


AcceptPokemon:
# 47 "data/maps/Custom_Room/scripts.pory"
	goto_if_set FLAG_CUSTOM_RECEIVED_STARTER, AcceptPokemon_2
# 52 "data/maps/Custom_Room/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 53 "data/maps/Custom_Room/scripts.pory"
	msgbox Custom_DoYouWantThisPokemon, MSGBOX_YESNO
# 54 "data/maps/Custom_Room/scripts.pory"
	hidemonpic
# 55 "data/maps/Custom_Room/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AcceptPokemon_5
AcceptPokemon_4:
# 62 "data/maps/Custom_Room/scripts.pory"
	release
	return

AcceptPokemon_2:
# 48 "data/maps/Custom_Room/scripts.pory"
	msgbox Custom_CannotDoThat, MSGBOX_AUTOCLOSE
	return

AcceptPokemon_5:
# 56 "data/maps/Custom_Room/scripts.pory"
	givemon VAR_TEMP_1, 20
# 57 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 58 "data/maps/Custom_Room/scripts.pory"
	msgbox Custom_PokemonPicked, MSGBOX_DEFAULT
# 59 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_CUSTOM_RECEIVED_STARTER
# 60 "data/maps/Custom_Room/scripts.pory"
	removeobject VAR_TEMP_2
	goto AcceptPokemon_4


Custom_DoYouWantThisPokemon::
# 65 "data/maps/Custom_Room/scripts.pory"
	.string "Do I want this Pokémon?$"

Custom_PokemonPicked::
# 69 "data/maps/Custom_Room/scripts.pory"
	.string "It is done.$"

Custom_CannotDoThat::
# 73 "data/maps/Custom_Room/scripts.pory"
	.string "I cannot do that.$"
