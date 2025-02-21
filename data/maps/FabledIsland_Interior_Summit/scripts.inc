FabledIsland_Interior_Summit_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetupRival_Summit_GfxId
	.byte 0


SetupRival_Summit_GfxId::
	removeobject 4
	goto_if_set FLAG_NEO_EVENT_DONE, SetupRival_Summit_GfxId_1
	return

SetupRival_Summit_GfxId_1:
	call Common_EventScript_SetupRivalGfxId
	addobject 4
	return


FabledIsland_Summit_EventScript_Fix_Left::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, FabledIsland_Summit_Fix_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	goto FabledIsland_Summit_EventScript
	return


FabledIsland_Summit_EventScript_Fix_Right::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, FabledIsland_Summit_Fix_Right
	waitmovement OBJ_EVENT_ID_PLAYER
	goto FabledIsland_Summit_EventScript
	return


FabledIsland_Summit_EventScript::
	applymovement OBJ_EVENT_ID_PLAYER, FabledIsland_Summit_Walk_Up
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, FabledIsland_Summit_Pan_Up
	waitmovement 0
	special RemoveCameraObject
	applymovement 1, FabledIsland_Summit_Walk_In_Place_Down
	msgbox FabledIsland_Summit_Maxie_Finally, MSGBOX_DEFAULT
	closemessage
	applymovement 2, FabledIsland_Summit_Walk_In_Place_Down
	msgbox FabledIsland_Summit_Archie_Jirachi, MSGBOX_DEFAULT
	closemessage
	applymovement 1, FabledIsland_Summit_Face_Left
	waitmovement 1
	msgbox FabledIsland_Summit_Maxie_Wait, MSGBOX_DEFAULT
	applymovement 2, FabledIsland_Summit_Face_Right
	waitmovement 2
	msgbox FabledIsland_Summit_Archie_Good_Idea, MSGBOX_DEFAULT
	applymovement 1, FabledIsland_Summit_Walk_In_Place_Down
	applymovement 2, FabledIsland_Summit_Walk_In_Place_Down
	msgbox FabledIsland_Summit_Archie_Alright, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	closemessage
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	fadescreen FADE_FROM_BLACK
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, FabledIsland_Summit_Pan_Down
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_GIFT_UNUSED_1, 2
	setflag FLAG_FABLED_ISLAND_FINISH
	return


FabledIsland_Summit_Rival_Battle::
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq FabledIsland_Summit_Rival_Battle_2
	msgbox FabledIsland_Summit_Brendan_Hello, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq FabledIsland_Summit_Rival_Battle_8
	msgbox FabledIsland_Summit_Brendan_No, MSGBOX_NPC
FabledIsland_Summit_Rival_Battle_1:
	closemessage
	applymovement VAR_LAST_TALKED, FabledIsland_Summit_Walk_Fast_Down
	waitmovement 0
	delay 50
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	removeobject VAR_LAST_TALKED
	waitfieldeffect FLDEFF_NPCFLY_OUT
	return

FabledIsland_Summit_Rival_Battle_2:
	msgbox FabledIsland_Summit_May_Hello, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq FabledIsland_Summit_Rival_Battle_5
	msgbox FabledIsland_Summit_May_No, MSGBOX_NPC
	goto FabledIsland_Summit_Rival_Battle_1

FabledIsland_Summit_Rival_Battle_5:
	msgbox FabledIsland_Summit_May_Yes, MSGBOX_NPC
	switch VAR_STARTER_MON
	case 0, FabledIsland_Summit_Rival_Battle_13
	case 1, FabledIsland_Summit_Rival_Battle_14
	case 2, FabledIsland_Summit_Rival_Battle_15
FabledIsland_Summit_Rival_Battle_11:
	msgbox FabledIsland_Summit_May_Defeated
	setflag FLAG_FINAL_RIVAL_BATTLE
	goto FabledIsland_Summit_Rival_Battle_1

FabledIsland_Summit_Rival_Battle_8:
	msgbox FabledIsland_Summit_Brendan_Yes, MSGBOX_NPC
	switch VAR_STARTER_MON
	case 0, FabledIsland_Summit_Rival_Battle_18
	case 1, FabledIsland_Summit_Rival_Battle_19
	case 2, FabledIsland_Summit_Rival_Battle_20
FabledIsland_Summit_Rival_Battle_16:
	msgbox FabledIsland_Summit_Brendan_Defeated
	setflag FLAG_FINAL_RIVAL_BATTLE
	goto FabledIsland_Summit_Rival_Battle_1

FabledIsland_Summit_Rival_Battle_13:
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, FabledIsland_Summit_Rival_Lose_Text
	goto FabledIsland_Summit_Rival_Battle_11

FabledIsland_Summit_Rival_Battle_14:
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, FabledIsland_Summit_Rival_Lose_Text
	goto FabledIsland_Summit_Rival_Battle_11

FabledIsland_Summit_Rival_Battle_15:
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, FabledIsland_Summit_Rival_Lose_Text
	goto FabledIsland_Summit_Rival_Battle_11

FabledIsland_Summit_Rival_Battle_18:
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, FabledIsland_Summit_Rival_Lose_Text
	goto FabledIsland_Summit_Rival_Battle_16

FabledIsland_Summit_Rival_Battle_19:
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, FabledIsland_Summit_Rival_Lose_Text
	goto FabledIsland_Summit_Rival_Battle_16

FabledIsland_Summit_Rival_Battle_20:
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, FabledIsland_Summit_Rival_Lose_Text
	goto FabledIsland_Summit_Rival_Battle_16


FabledIsland_Summit_Walk_In_Place_Down:
	walk_in_place_down
	step_end

FabledIsland_Summit_Face_Right:
	face_right
	step_end

FabledIsland_Summit_Face_Left:
	face_left
	step_end

FabledIsland_Summit_Walk_Up:
	walk_up
	walk_up
	step_end

FabledIsland_Summit_Pan_Up:
	walk_slow_up
	walk_slow_up
	step_end

FabledIsland_Summit_Pan_Down:
	walk_slow_down
	walk_slow_down
	step_end

FabledIsland_Summit_Walk_Fast_Down:
	walk_in_place_faster_down
	step_end

FabledIsland_Summit_Fix_Left:
	walk_up
	walk_right
	step_end

FabledIsland_Summit_Fix_Right:
	walk_up
	walk_left
	step_end

FabledIsland_Summit_Maxie_Finally::
	.string "Maxie: So, you've finally come.\p"
	.string "Hehehe, you're too late. Archie and I\n"
	.string "have already captured the POKéMON\l"
	.string "from the meteor$"

FabledIsland_Summit_Archie_Jirachi::
	.string "Archie: Fufufu, we caught JIRACHI, and\n"
	.string "used its power to wish for a POKéMON to\l"
	.string "defeat you!\p"
	.string "It granted us this DEOXYS, and with it\n"
	.string "we will defeat you easily!$"

FabledIsland_Summit_Maxie_Wait::
	.string "Maxie: Wait, though it would be easy to\n"
	.string "defeat {PLAYER} here, with their\l"
	.string "tired POKéMON, it wouldn't be ideal.\p"
	.string "We should let {PLAYER} heal and fight\n"
	.string "us in our base, the height of our power\l"
	.string "verses theirs, for dominance of Hoenn.$"

FabledIsland_Summit_Archie_Good_Idea::
	.string "Archie: Heh, not a bad idea. That would\n"
	.string "give us time to understand DEOXYS and\l"
	.string "JIRACHI's power better too.$"

FabledIsland_Summit_Archie_Alright::
	.string "Alright then {PLAYER}, hurry to our\n"
	.string "base near MT. PYRE, we'll be waiting for\l"
	.string "your challenge!\p"
	.string "Team Neo, move out!$"

FabledIsland_Summit_May_Hello::
	.string "May: Aaahh, the air up here is so nice!\n"
	.string "What do you think, {PLAYER}?\p"
	.string "I've been training hard, and I think I'm\n"
	.string "finally ready to challenge you. What do\l"
	.string "you say, are you ready to face me?$"

FabledIsland_Summit_May_Yes::
	.string "May: Alright... this is it, I won't lose\n"
	.string "anymore!$"

FabledIsland_Summit_May_No::
	.string "May: Haha, no worries, you don't have to\n"
	.string "prove anything to me.$"

FabledIsland_Summit_May_Defeated::
	.string "May: I can't believe it... you're like an\n"
	.string "insurmountable wall that no one can\l"
	.string "overcome.\p"
	.string "But you know what, that's okay. You've\n"
	.string "helped push me to levels farther than I\l"
	.string "could have imagined.\p"
	.string "I guess that's how you got so strong\n"
	.string "too, taking on gyms, the Elite Four,\l"
	.string "even the Champion.\p"
	.string "Your battles were incredible.\p"
	.string "...\p"
	.string "What do you think you'll do next?\n"
	.string "Complete your POKéDEX? Challenge the\l"
	.string "Battle Frontier? Or maybe you're\l"
	.string "planning to go abroad?\p"
	.string "No matter what you do, I'll be rooting\n"
	.string "for you!$"

FabledIsland_Summit_Brendan_Hello::
	.string "Brendan: The air up here is really clear,\n"
	.string "what do you think, {PLAYER}?\p"
	.string "I've been training hard, and I'm ready\n"
	.string "to challenge you. What do you say, are\l"
	.string "you ready to face me?$"

FabledIsland_Summit_Brendan_Yes::
	.string "Brendan: This is it, I won't lose to\n"
	.string "anyone!$"

FabledIsland_Summit_Brendan_No::
	.string "Brendan: Haha, I'd be scared of my\n"
	.string "strength too.$"

FabledIsland_Summit_Rival_Lose_Text::
	.string "Wow, that was an incredible final\n"
	.string "battle!$"

FabledIsland_Summit_Brendan_Defeated::
	.string "Brendan: I can't believe it... you're like\n"
	.string "an insurmountable wall that no one can\l"
	.string "overcome.\p"
	.string "But you know what, that's okay. You've\n"
	.string "pushed me to levels farther than I\l"
	.string "could have imagined.\p"
	.string "I guess that's how you got so strong\n"
	.string "too, taking on gyms, the Elite Four,\l"
	.string "even the Champion.\p"
	.string "Your battles were incredible.\p"
	.string "...\p"
	.string "What do you think you'll do next?\n"
	.string "Complete your POKéDEX? Challenge the\l"
	.string "Battle Frontier? Or maybe you're\l"
	.string "planning to go abroad?\p"
	.string "No matter what you do, I'll be ready for\n"
	.string "your next challenge!$"
