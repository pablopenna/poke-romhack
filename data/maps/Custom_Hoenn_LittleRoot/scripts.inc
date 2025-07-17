Custom_Hoenn_LittleRoot_MapScripts::
	.byte 0


Custom_LittleRoot_PlayerReflection::
# 4 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 5 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER_REFLECTION, Custom_LittleRoot_PlayerReflection_Movement_0
# 8 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_PlayerReflection, MSGBOX_AUTOCLOSE
# 9 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_PLAYER_REFLECTION, Custom_LittleRoot_PlayerReflection_Movement_1
# 12 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	playbgm MUS_LITTLEROOT, FALSE
	return


Custom_LittleRoot_LittleKid::
# 16 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	applymovement LOCALID_LITTLEKID, Custom_LittleRoot_PlayerReflection_Movement_0
# 19 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_LittleKid, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_PlayerHouseSign::
# 23 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Player_House, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_RivalHouseSign::
# 27 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Rival_House, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_RivalHouseDoor::
# 31 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Rival_House_Door, MSGBOX_AUTOCLOSE
	return


Custom_LittleRoot_LabSign::
# 35 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	msgbox Text_Custom_LittleRoot_Sign_Lab, MSGBOX_AUTOCLOSE
	return


# 5 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_PlayerReflection_Movement_0:
# 6 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_player
	step_end

# 9 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
Custom_LittleRoot_PlayerReflection_Movement_1:
# 10 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	face_up
	step_end

Text_Custom_LittleRoot_PlayerReflection::
# 38 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "You remember how this goes, don't you?$"

Text_Custom_LittleRoot_LittleKid::
# 42 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "You're late again… weren't you?\n"
	.string "No… I think you were early.$"

Text_Custom_LittleRoot_Sign_Lab::
# 46 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The sign says: 'Pokémon Lab.' But you're\n"
	.string "not sure that's what it really is.$"

Text_Custom_LittleRoot_Sign_Player_House::
# 50 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The sign says that… you live here? That\n"
	.string "can't be right.$"

Text_Custom_LittleRoot_Sign_Rival_House::
# 54 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The text in the sign is smudged.$"

Text_Custom_LittleRoot_Rival_House_Door::
# 58 "data/maps/Custom_Hoenn_LittleRoot/scripts.pory"
	.string "The handle is cold. You let go.$"
