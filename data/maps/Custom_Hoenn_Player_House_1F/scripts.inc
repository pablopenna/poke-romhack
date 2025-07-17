Custom_Hoenn_Player_House_1F_MapScripts::
	.byte 0


Custom_Wallclock_Script::
# 4 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, Custom_Wallclock_Script_2
Custom_Wallclock_Script_1:
# 7 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	msgbox Text_Custom_SetClockText_Before, MSGBOX_AUTOCLOSE
# 8 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	call Custom_SetWallClock
# 9 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 10 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	msgbox Text_Custom_SetClockText_After, MSGBOX_AUTOCLOSE
# 11 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	releaseall
	end

Custom_Wallclock_Script_2:
# 5 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	call Custom_CheckWallClock
	goto Custom_Wallclock_Script_1


Custom_CheckWallClock:
# 17 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	special Special_ViewWallClock
# 19 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	waitstate
# 20 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	releaseall
	return


Custom_SetWallClock:
# 24 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	special StartWallClock
# 26 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	waitstate
	return


Text_Custom_SetClockText_Before::
# 30 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	.string "The world is still.\n"
	.string "You move the clock.$"

Text_Custom_SetClockText_After::
# 34 "data/maps/Custom_Hoenn_Player_House_1F/scripts.pory"
	.string "You adjust the clock. As if pretending\n"
	.string "time still matters.$"
