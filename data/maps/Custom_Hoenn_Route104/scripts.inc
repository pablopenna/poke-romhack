Custom_Hoenn_Route104_MapScripts::
# 6 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setvar VAR_TEMP_0, 0
# 8 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_set FLAG_CUSTOM_ROUTE104_SILVER_ENCOUNTER, Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD_2
Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	clearflag FLAG_TEMP_1
# 12 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	clearflag FLAG_TEMP_2
	return

Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD_1


Custom_Hoenn_Route104_SilverEncounter_Top::
# 17 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_set FLAG_CUSTOM_ROUTE104_SILVER_ENCOUNTER, Custom_Hoenn_Route104_SilverEncounter_Top_2
# 20 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setflag FLAG_TEMP_1
# 21 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	clearflag FLAG_TEMP_2
# 22 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	call Custom_Hoenn_Route104_SilverEncounter
	return

Custom_Hoenn_Route104_SilverEncounter_Top_2:
	return


Custom_Hoenn_Route104_SilverEncounter_Bottom::
# 26 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_set FLAG_CUSTOM_ROUTE104_SILVER_ENCOUNTER, Custom_Hoenn_Route104_SilverEncounter_Bottom_2
# 29 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	clearflag FLAG_TEMP_1
# 30 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setflag FLAG_TEMP_2
# 31 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	call Custom_Hoenn_Route104_SilverEncounter
	return

Custom_Hoenn_Route104_SilverEncounter_Bottom_2:
	return


Custom_Hoenn_Route104_SilverEncounter:
# 35 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_Route104_SilverEncounter_Movement_0
# 38 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_SilverEncounter1, MSGBOX_AUTOCLOSE
# 39 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, SilverMovementNoticePlayer
# 40 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playse SE_PIN
# 41 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 42 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 45 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_set FLAG_TEMP_2, Custom_Hoenn_Route104_SilverEncounter_2
Custom_Hoenn_Route104_SilverEncounter_1:
# 49 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, SilverMovementIntro
# 50 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 53 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_SilverEncounter2, MSGBOX_AUTOCLOSE
# 54 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay 32
# 55 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, ExclamationEmote
# 56 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playse SE_PIN
# 57 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 58 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, FacePlayer
# 59 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 60 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay 16
# 61 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_SilverEncounter3, MSGBOX_AUTOCLOSE
# 62 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, FacePlayer
# 63 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 64 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_SILVER, Custom_Hoenn_Route104_SilverEncounterBattleDefeat
# 65 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, FALSE
# 66 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, FacePlayer
# 67 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 68 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setflag FLAG_CUSTOM_ROUTE104_SILVER_ENCOUNTER
# 69 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_SilverEncounterOverworldDefeat, MSGBOX_AUTOCLOSE
# 72 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, SilverMovementExit
# 73 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 74 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	removeobject LOCALID_SILVER
# 75 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playbgm MUS_ROUTE104, FALSE
	return

Custom_Hoenn_Route104_SilverEncounter_2:
# 46 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, SilverMovementIntroBottomAdjustment
# 47 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
	goto Custom_Hoenn_Route104_SilverEncounter_1


# 78 "data/maps/Custom_Hoenn_Route104/scripts.pory"
SilverMovementNoticePlayer:
# 79 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	face_player
# 80 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay_16
# 81 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	emote_exclamation_mark
# 82 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay_16
# 82 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay_16
# 82 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay_16
	step_end

# 85 "data/maps/Custom_Hoenn_Route104/scripts.pory"
ExclamationEmote:
# 86 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	emote_exclamation_mark
	step_end

# 89 "data/maps/Custom_Hoenn_Route104/scripts.pory"
FacePlayer:
# 90 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	face_player
	step_end

# 93 "data/maps/Custom_Hoenn_Route104/scripts.pory"
SilverMovementIntro:
# 94 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 94 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 94 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 94 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 94 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 94 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
	step_end

# 97 "data/maps/Custom_Hoenn_Route104/scripts.pory"
SilverMovementIntroBottomAdjustment:
# 98 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_down
# 99 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	face_right
	step_end

# 102 "data/maps/Custom_Hoenn_Route104/scripts.pory"
SilverMovementExit:
# 103 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 103 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 103 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 103 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 103 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 103 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 104 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 104 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 104 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 104 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 104 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 104 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
	step_end

# 35 "data/maps/Custom_Hoenn_Route104/scripts.pory"
Custom_Hoenn_Route104_SilverEncounter_Movement_0:
# 35 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_in_place_left
	step_end

Custom_Hoenn_Route104_SilverEncounter1::
# 107 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "I wonder if there are any strong\n"
	.string "Pokémon around here...$"

Custom_Hoenn_Route104_SilverEncounter2::
# 111 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "What are you looking at?$"

Custom_Hoenn_Route104_SilverEncounter3::
# 115 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "Tch… Another trainer? Let's see if\n"
	.string "you're worth anything.$"

Custom_Hoenn_Route104_SilverEncounterBattleDefeat::
# 119 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "Damn it! My Pokémon are so weak.$"

Custom_Hoenn_Route104_SilverEncounterOverworldDefeat::
# 123 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "I used to have strong Pokémon. I tried\n"
	.string "trusting and treating\p"
	.string "them with love but they still couldn't\n"
	.string "defeat him.\p"
	.string "I gave up on them and since then I have\n"
	.string "been looking for stronger ones.\p"
	.string "I'll keep searching. One day I will be\n"
	.string "the world's greatest Pokémon trainer!\p"
	.string "We'll meet again.$"
