Custom_Room_MapScripts::
# 2 "data/maps/Custom_Room/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Custom_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Custom_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 5 "data/maps/Custom_Room/scripts.pory"
	setrespawn HEAL_LOCATION_CUSTOM_ROOM
# 9 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_3, 0
# 10 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_4, 0
# 11 "data/maps/Custom_Room/scripts.pory"
	goto_if_set FLAG_CUSTOM_RECEIVED_STARTER, Custom_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Custom_Room_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_4, 1
	return


Custom_Room_IntroSequence::
# 24 "data/maps/Custom_Room/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_PokemonPicked, MSGBOX_AUTOCLOSE
# 26 "data/maps/Custom_Room/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Custom_Room_DeprecatedChooseOneStarter::
# 30 "data/maps/Custom_Room/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/maps/Custom_Room/scripts.pory"
	special ChooseStarter
# 32 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


Custom_Room_TakePokemonA::
# 36 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KANGASKHAN
# 37 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_A
# 38 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonB::
# 42 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HERACROSS
# 43 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_B
# 44 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonC::
# 48 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABSOL
# 49 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_2, LOCALID_POKEBALL_C
# 50 "data/maps/Custom_Room/scripts.pory"
	goto AcceptPokemon
	return


Custom_Room_TakePokemonRandom::
# 55 "data/maps/Custom_Room/scripts.pory"
	random NUM_SPECIES
# 56 "data/maps/Custom_Room/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
	return


AcceptPokemon:
# 60 "data/maps/Custom_Room/scripts.pory"
	goto_if_set FLAG_CUSTOM_RECEIVED_STARTER, AcceptPokemon_2
# 65 "data/maps/Custom_Room/scripts.pory"
	showmonpic VAR_TEMP_1, 10, 3
# 66 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_DoYouWantThisPokemon, MSGBOX_YESNO
# 67 "data/maps/Custom_Room/scripts.pory"
	release
# 68 "data/maps/Custom_Room/scripts.pory"
	hidemonpic
# 69 "data/maps/Custom_Room/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AcceptPokemon_5
AcceptPokemon_4:
# 80 "data/maps/Custom_Room/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq AcceptPokemon_8
AcceptPokemon_7:
# 83 "data/maps/Custom_Room/scripts.pory"
	release
	return

AcceptPokemon_2:
# 61 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_CannotDoThat, MSGBOX_AUTOCLOSE
	return

AcceptPokemon_5:
# 70 "data/maps/Custom_Room/scripts.pory"
	givemon VAR_TEMP_1, 55
# 71 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_CUSTOM_LEVEL_CAP, 15
# 72 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 73 "data/maps/Custom_Room/scripts.pory"
	setflag FLAG_CUSTOM_RECEIVED_STARTER
# 74 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_PokemonPicked, MSGBOX_AUTOCLOSE
# 75 "data/maps/Custom_Room/scripts.pory"
	removeobject VAR_TEMP_2
# 76 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_3, 1
# 77 "data/maps/Custom_Room/scripts.pory"
	setvar VAR_TEMP_4, 1
	goto AcceptPokemon_4

AcceptPokemon_8:
# 81 "data/maps/Custom_Room/scripts.pory"
	call GiveStartingItems
	goto AcceptPokemon_7


GiveStartingItems:
# 91 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_RARE_CANDY, 999
# 92 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HP_UP, 999
# 93 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_PROTEIN, 999
# 94 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_IRON, 999
# 95 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_CALCIUM, 999
# 96 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_ZINC, 999
# 97 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_CARBOS, 999
# 98 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_MASTER_BALL, 999
# 100 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HM01, 1
# 101 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HM02, 1
# 102 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HM03, 1
# 103 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HM04, 1
# 104 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HM05, 1
# 105 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HM06, 1
# 106 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HM07, 1
# 107 "data/maps/Custom_Room/scripts.pory"
	addpcitem ITEM_HM08, 1
	return


Custom_Room_ForceTakePokemon::
# 112 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_YouHaveToPick, MSGBOX_AUTOCLOSE
# 113 "data/maps/Custom_Room/scripts.pory"
	applymovement LOCALID_PLAYER, WalkUp
# 114 "data/maps/Custom_Room/scripts.pory"
	waitmovement LOCALID_PLAYER
	return


Custom_Room_HealParty::
# 118 "data/maps/Custom_Room/scripts.pory"
	lockall
# 119 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_Statue, MSGBOX_AUTOCLOSE
# 120 "data/maps/Custom_Room/scripts.pory"
	goto_if_set FLAG_CUSTOM_RECEIVED_STARTER, Custom_Room_HealParty_2
Custom_Room_HealParty_1:
# 126 "data/maps/Custom_Room/scripts.pory"
	releaseall
	return

Custom_Room_HealParty_2:
# 121 "data/maps/Custom_Room/scripts.pory"
	playfanfare MUS_HEAL
# 122 "data/maps/Custom_Room/scripts.pory"
	waitfanfare
# 123 "data/maps/Custom_Room/scripts.pory"
	special HealPlayerParty
# 124 "data/maps/Custom_Room/scripts.pory"
	msgbox Text_CustomRoom_PartyHealed, MSGBOX_AUTOCLOSE
	goto Custom_Room_HealParty_1


# 130 "data/maps/Custom_Room/scripts.pory"
WalkUp:
# 131 "data/maps/Custom_Room/scripts.pory"
	walk_up
# 131 "data/maps/Custom_Room/scripts.pory"
	walk_up
# 131 "data/maps/Custom_Room/scripts.pory"
	walk_up
# 131 "data/maps/Custom_Room/scripts.pory"
	walk_up
	step_end

Text_CustomRoom_DoYouWantThisPokemon::
# 134 "data/maps/Custom_Room/scripts.pory"
	.string "You reach out, uncertain.\n"
	.string "Will you take this Pokémon?$"

Text_CustomRoom_PokemonPicked::
# 140 "data/maps/Custom_Room/scripts.pory"
	.string "A part of you clings to this choice.\n"
	.string "You feel… a little more whole.$"

Text_CustomRoom_CannotDoThat::
# 146 "data/maps/Custom_Room/scripts.pory"
	.string "You made your choice.\n"
	.string "You can't turn back now.$"

Text_CustomRoom_YouHaveToPick::
# 150 "data/maps/Custom_Room/scripts.pory"
	.string "Something is missing.$"

Text_CustomRoom_Statue::
# 154 "data/maps/Custom_Room/scripts.pory"
	.string "The statue exudes a strange energy.$"

Text_CustomRoom_PartyHealed::
# 158 "data/maps/Custom_Room/scripts.pory"
	.string "Your Pokémon have been healed.$"
