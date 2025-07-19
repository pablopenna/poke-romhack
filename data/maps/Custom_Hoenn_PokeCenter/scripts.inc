Custom_Hoenn_PokeCenter_MapScripts::
	.byte 0


Custom_Hoenn_PokeCenter_Heal::
# 4 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	hidefollower 0
# 5 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	call Custom_Hoenn_PokeCenter_AdjustPosition
# 6 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 7 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 8 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	special HealPlayerParty
# 9 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	call Custom_Hoenn_PokeCenter_GoBack
# 10 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	callnative UpdateFollowingPokemon
	return


Custom_Hoenn_PokeCenter_AdjustPosition:
# 14 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_PokeCenter_AdjustPosition_Movement_0
# 18 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	waitmovement
	return


Custom_Hoenn_PokeCenter_GoBack:
# 22 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	applymovement LOCALID_PLAYER, Custom_Hoenn_PokeCenter_GoBack_Movement_0
# 26 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	waitmovement
	return


# 14 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
Custom_Hoenn_PokeCenter_AdjustPosition_Movement_0:
# 15 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	walk_down
# 15 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	walk_down
# 16 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	face_up
	step_end

# 22 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
Custom_Hoenn_PokeCenter_GoBack_Movement_0:
# 23 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	walk_up
# 23 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	walk_up
# 24 "data/maps/Custom_Hoenn_PokeCenter/scripts.pory"
	face_left
	step_end
