CommonGetBadgeNumber::
# 2 "data/scripts/get_badge_number.pory"
	setvar VAR_RESULT, 0
# 3 "data/scripts/get_badge_number.pory"
	goto_if_set FLAG_BADGE01_GET, CommonGetBadgeNumber_2
CommonGetBadgeNumber_1:
# 6 "data/scripts/get_badge_number.pory"
	goto_if_set FLAG_BADGE02_GET, CommonGetBadgeNumber_5
CommonGetBadgeNumber_4:
# 9 "data/scripts/get_badge_number.pory"
	goto_if_set FLAG_BADGE03_GET, CommonGetBadgeNumber_8
CommonGetBadgeNumber_7:
# 12 "data/scripts/get_badge_number.pory"
	goto_if_set FLAG_BADGE04_GET, CommonGetBadgeNumber_11
CommonGetBadgeNumber_10:
# 15 "data/scripts/get_badge_number.pory"
	goto_if_set FLAG_BADGE05_GET, CommonGetBadgeNumber_14
CommonGetBadgeNumber_13:
# 18 "data/scripts/get_badge_number.pory"
	goto_if_set FLAG_BADGE06_GET, CommonGetBadgeNumber_17
CommonGetBadgeNumber_16:
# 21 "data/scripts/get_badge_number.pory"
	goto_if_set FLAG_BADGE07_GET, CommonGetBadgeNumber_20
CommonGetBadgeNumber_19:
# 24 "data/scripts/get_badge_number.pory"
	goto_if_set FLAG_BADGE08_GET, CommonGetBadgeNumber_22
	return

CommonGetBadgeNumber_2:
# 4 "data/scripts/get_badge_number.pory"
	addvar VAR_RESULT, 1
	goto CommonGetBadgeNumber_1

CommonGetBadgeNumber_5:
# 7 "data/scripts/get_badge_number.pory"
	addvar VAR_RESULT, 1
	goto CommonGetBadgeNumber_4

CommonGetBadgeNumber_8:
# 10 "data/scripts/get_badge_number.pory"
	addvar VAR_RESULT, 1
	goto CommonGetBadgeNumber_7

CommonGetBadgeNumber_11:
# 13 "data/scripts/get_badge_number.pory"
	addvar VAR_RESULT, 1
	goto CommonGetBadgeNumber_10

CommonGetBadgeNumber_14:
# 16 "data/scripts/get_badge_number.pory"
	addvar VAR_RESULT, 1
	goto CommonGetBadgeNumber_13

CommonGetBadgeNumber_17:
# 19 "data/scripts/get_badge_number.pory"
	addvar VAR_RESULT, 1
	goto CommonGetBadgeNumber_16

CommonGetBadgeNumber_20:
# 22 "data/scripts/get_badge_number.pory"
	addvar VAR_RESULT, 1
	goto CommonGetBadgeNumber_19

CommonGetBadgeNumber_22:
# 25 "data/scripts/get_badge_number.pory"
	addvar VAR_RESULT, 1
	return

