Custom_Hoenn_Route104_MapScripts::
# 8 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setvar VAR_TEMP_0, 0
# 10 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_set FLAG_CUSTOM_ROUTE104_SILVER_ENCOUNTER, Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD_2
Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 13 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	clearflag FLAG_TEMP_1
# 14 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	clearflag FLAG_TEMP_2
	return

Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Custom_Hoenn_Route104_MapScripts_MAP_SCRIPT_ON_LOAD_1


Custom_Hoenn_Route104_SilverEncounter_Top::
# 21 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_set FLAG_CUSTOM_ROUTE104_SILVER_ENCOUNTER, Custom_Hoenn_Route104_SilverEncounter_Top_2
# 24 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setflag FLAG_TEMP_1
# 25 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	clearflag FLAG_TEMP_2
# 26 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	call Custom_Hoenn_Route104_SilverEncounter
	return

Custom_Hoenn_Route104_SilverEncounter_Top_2:
	return


Custom_Hoenn_Route104_SilverEncounter_Bottom::
# 30 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_set FLAG_CUSTOM_ROUTE104_SILVER_ENCOUNTER, Custom_Hoenn_Route104_SilverEncounter_Bottom_2
# 33 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	clearflag FLAG_TEMP_1
# 34 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setflag FLAG_TEMP_2
# 35 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	call Custom_Hoenn_Route104_SilverEncounter
	return

Custom_Hoenn_Route104_SilverEncounter_Bottom_2:
	return


Custom_Hoenn_Route104_SilverEncounter:
# 39 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_Route104_SilverEncounter_Movement_0
# 42 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_SilverEncounter1, MSGBOX_AUTOCLOSE
# 43 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, SilverMovementNoticePlayer
# 44 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 46 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 49 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_set FLAG_TEMP_2, Custom_Hoenn_Route104_SilverEncounter_2
Custom_Hoenn_Route104_SilverEncounter_1:
# 53 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, SilverMovementIntro
# 54 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 57 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_SilverEncounter2, MSGBOX_AUTOCLOSE
# 58 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay 32
# 59 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, ExclamationEmote
# 60 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playse SE_PIN
# 61 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 62 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, FacePlayer
# 63 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 64 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay 16
# 65 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_SilverEncounter3, MSGBOX_AUTOCLOSE
# 66 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, FacePlayer
# 67 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 68 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_SILVER, Custom_Hoenn_Route104_SilverEncounterBattleDefeat
# 69 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, FALSE
# 70 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, FacePlayer
# 71 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 72 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setflag FLAG_CUSTOM_ROUTE104_SILVER_ENCOUNTER
# 73 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_SilverEncounterOverworldDefeat, MSGBOX_AUTOCLOSE
# 76 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, SilverMovementExit
# 77 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
# 78 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	removeobject LOCALID_SILVER
# 79 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	playbgm MUS_ROUTE104, FALSE
	return

Custom_Hoenn_Route104_SilverEncounter_2:
# 50 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	applymovement LOCALID_SILVER, SilverMovementIntroBottomAdjustment
# 51 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	waitmovement
	goto Custom_Hoenn_Route104_SilverEncounter_1


# 82 "data/maps/Custom_Hoenn_Route104/scripts.pory"
SilverMovementNoticePlayer:
# 83 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	face_player
# 84 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay_16
# 85 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	emote_exclamation_mark
# 86 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay_16
# 86 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay_16
# 86 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	delay_16
	step_end

# 89 "data/maps/Custom_Hoenn_Route104/scripts.pory"
ExclamationEmote:
# 90 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	emote_exclamation_mark
	step_end

# 93 "data/maps/Custom_Hoenn_Route104/scripts.pory"
FacePlayer:
# 94 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	face_player
	step_end

# 97 "data/maps/Custom_Hoenn_Route104/scripts.pory"
SilverMovementIntro:
# 98 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 98 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 98 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 98 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 98 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
# 98 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_right
	step_end

# 101 "data/maps/Custom_Hoenn_Route104/scripts.pory"
SilverMovementIntroBottomAdjustment:
# 102 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_down
# 103 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	face_right
	step_end

# 106 "data/maps/Custom_Hoenn_Route104/scripts.pory"
SilverMovementExit:
# 107 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 107 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 107 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 107 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 107 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 107 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_left
# 108 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 108 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 108 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 108 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 108 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
# 108 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_up
	step_end

Custom_Hoenn_Route104_Fisherman::
# 140 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	lockall
# 141 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	goto_if_unset FLAG_CUSTOM_ROUTE104_RECEIVED_ROD, Custom_Hoenn_Route104_Fisherman_2
Custom_Hoenn_Route104_Fisherman_1:
# 146 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_Fisherman_AfterRod, MSGBOX_AUTOCLOSE
# 148 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	releaseall
	return

Custom_Hoenn_Route104_Fisherman_2:
# 142 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	msgbox Custom_Hoenn_Route104_Fisherman_GiveRod, MSGBOX_AUTOCLOSE
# 143 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	giveitem ITEM_OLD_ROD
# 144 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	setflag FLAG_CUSTOM_ROUTE104_RECEIVED_ROD
	goto Custom_Hoenn_Route104_Fisherman_1


# 39 "data/maps/Custom_Hoenn_Route104/scripts.pory"
Custom_Hoenn_Route104_SilverEncounter_Movement_0:
# 39 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	walk_in_place_left
	step_end

Custom_Hoenn_Route104_SilverEncounter1::
# 111 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "I wonder if there are any strong\n"
	.string "Pokémon around here...$"

Custom_Hoenn_Route104_SilverEncounter2::
# 115 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "What are you looking at?$"

Custom_Hoenn_Route104_SilverEncounter3::
# 119 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "Tch… Another trainer? Let's see if\n"
	.string "you're worth anything.$"

Custom_Hoenn_Route104_SilverEncounterBattleDefeat::
# 123 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "Damn it! My Pokémon are so weak.$"

Custom_Hoenn_Route104_SilverEncounterOverworldDefeat::
# 127 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "I used to have strong Pokémon. I tried\n"
	.string "trusting and treating\p"
	.string "them with love but they still couldn't\n"
	.string "defeat him.\p"
	.string "I gave up on them and since then I have\n"
	.string "been looking for stronger ones.\p"
	.string "I'll keep searching. One day I will be\n"
	.string "the world's greatest Pokémon trainer!\p"
	.string "We'll meet again.$"

Custom_Hoenn_Route104_Fisherman_GiveRod::
# 151 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "I used to love fishing. Everyday I would\n"
	.string "wake up early and spend the whole\p"
	.string "day doing it. I enjoyed every second.\p"
	.string "Now I don't feel anything. I have to\n"
	.string "force myself to do it and still\p"
	.string "I don't last long before stopping.\p"
	.string "Take this, I don't need it anymore.$"

Custom_Hoenn_Route104_Fisherman_AfterRod::
# 161 "data/maps/Custom_Hoenn_Route104/scripts.pory"
	.string "Please go. I want to be alone.$"
