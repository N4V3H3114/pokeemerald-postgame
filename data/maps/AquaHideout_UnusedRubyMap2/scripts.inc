AquaHideout_UnusedRubyMap2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetupRivalGfxId_NeoHideout
	.byte 0


SetupRivalGfxId_NeoHideout::
	removeobject 3
	call Common_EventScript_SetupRivalGfxId
	return


EventScript_NeoHideout_Map2_After_Centering::
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EventScript_NeoHideout_Map2_Walk_To_Center
	return


EventScript_NeoHideout_Map2_Walk_Down::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Down
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_Down2::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Down2
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_Down3::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Down3
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_Down4::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Down4
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_Up::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Up
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_Up2::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Up2
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_Up3::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Up3
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_Up4::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Up4
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_Up5::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Up5
	goto EventScript_NeoHideout_Map2_After_Centering
	return


EventScript_NeoHideout_Map2_Walk_To_Center::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Walk_Center
	waitmovement OBJ_EVENT_ID_PLAYER
	goto EventScript_NeoHideout_Map2_Final_Battle
	return


EventScript_NeoHideout_Map2_Final_Battle::
	lockall
	applymovement 1, Movement_Walk_In_Place_Left
	msgbox Text_NeoHideout_Map2_Archie_Youve_Come, MSGBOX_DEFAULT
	applymovement 2, Movement_Walk_In_Place_Left
	msgbox Text_NeoHideout_Map2_Maxie_Doesnt_Matter, MSGBOX_DEFAULT
	applymovement 1, Movement_Walk_In_Place_Left
	msgbox Text_NeoHideout_Map2_Archie_Then_We_Fight, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_ARCHIE, Text_NeoHideout_Map2_Archie_Lose
	applymovement 2, Movement_Walk_In_Place_Left
	msgbox Text_NeoHideout_Map2_Maxie_Not_Bad, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, Text_NeoHideout_Map2_Maxie_Lose
	msgbox Text_NeoHideout_Map2_Maxie_Post_Battle, MSGBOX_DEFAULT
	closemessage
	addobject 3
	addobject 4
	applymovement 3, Movement_Backup_Approach
	applymovement 4, Movement_Backup_Approach
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq EventScript_NeoHideout_Map2_Final_Battle_2
	msgbox Text_NeoHideout_Map2_Brendan_Intro, MSGBOX_DEFAULT
EventScript_NeoHideout_Map2_Final_Battle_1:
	msgbox Text_NeoHideout_Map2_Wallace_Seems_So, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Movement_Walk_In_Place_Left
	msgbox Text_NeoHideout_Map2_Archie_Yes, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Movement_Face_Up
	msgbox Text_NeoHideout_Map2_Maxie_Yes, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Movement_Archie_Leave
	applymovement 2, Movement_Maxie_Leave
	applymovement 4, Movement_Wallace_Leave
	waitmovement 1
	removeobject 1
	removeobject 2
	removeobject 4
	applymovement 3, Movement_Face_Down
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Up
	compare VAR_RESULT, 0
	goto_if_eq EventScript_NeoHideout_Map2_Final_Battle_6
	msgbox Text_NeoHideout_Map2_Brendan_Take_Jirachi, MSGBOX_DEFAULT
EventScript_NeoHideout_Map2_Final_Battle_5:
	closemessage
	applymovement 3, Movement_Wallace_Leave
	waitmovement 3
	removeobject 3
	setflag FLAG_NEO_EVENT_DONE
	setvar VAR_GIFT_UNUSED_1, 3
	releaseall
	return

EventScript_NeoHideout_Map2_Final_Battle_2:
	msgbox Text_NeoHideout_Map2_May_Intro, MSGBOX_DEFAULT
	goto EventScript_NeoHideout_Map2_Final_Battle_1

EventScript_NeoHideout_Map2_Final_Battle_6:
	msgbox Text_NeoHideout_Map2_May_Take_Jirachi, MSGBOX_DEFAULT
	goto EventScript_NeoHideout_Map2_Final_Battle_5


EventScript_NeoHideout_Map2_Meteor::
	lockall
	msgbox Text_NeoHideout_Map2_Meteor, MSGBOX_SIGN
	releaseall
	return


Movement_Player_Walk_Down:
	walk_down
	step_end

Movement_Player_Walk_Down2:
	walk_down
	walk_down
	step_end

Movement_Player_Walk_Down3:
	walk_down
	walk_down
	walk_down
	step_end

Movement_Player_Walk_Down4:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_Player_Walk_Up:
	walk_up
	step_end

Movement_Player_Walk_Up2:
	walk_up
	walk_up
	step_end

Movement_Player_Walk_Up3:
	walk_up
	walk_up
	walk_up
	step_end

Movement_Player_Walk_Up4:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Player_Walk_Up5:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Face_Down:
	face_down
	step_end

Movement_Player_Walk_Center:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_Walk_In_Place_Left:
	walk_in_place_left
	walk_in_place_left
	step_end

Movement_Backup_Approach:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Movement_Face_Up:
	face_up
	step_end

Movement_Wallace_Leave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Maxie_Leave:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Archie_Leave:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Text_NeoHideout_Map2_Archie_Youve_Come::
	.string "Archie: Fufufu, you've finally made it. I\n"
	.string "had no doubts that you would.\p"
	.string "Was it your passion to save Hoenn?\p"
	.string "Was it your drive for battle?\p"
	.string "Or perhaps something like a love for\n"
	.string "POKéMON?$"

Text_NeoHideout_Map2_Maxie_Doesnt_Matter::
	.string "Maxie: It doesn't matter what\n"
	.string "{PLAYER}'s reason is, they're the\l"
	.string "last obstacle that stands in our way\l"
	.string "of dominating Hoenn! Once they're out\l"
	.string "of the picture, we'll reclaim KYOGRE and\l"
	.string "GROUDON.$"

Text_NeoHideout_Map2_Archie_Then_We_Fight::
	.string "Archie: Grahaha, and then we can go\n"
	.string "back to fighting eachother! I'll be\l"
	.string "looking forward to it.\p"
	.string "But first, {PLAYER}, it's time to take\n"
	.string "you down! We're teaming up for one\l"
	.string "final battle!$"

Text_NeoHideout_Map2_Archie_Lose::
	.string "Haha, alright Maxie you take the lead\n"
	.string "for the finish!$"

Text_NeoHideout_Map2_Maxie_Not_Bad::
	.string "Not bad, but your strength won't be\n"
	.string "enough.$"

Text_NeoHideout_Map2_Maxie_Lose::
	.string "...$"

Text_NeoHideout_Map2_Maxie_Post_Battle::
	.string "Maxie: Impossible... how could we have\n"
	.string "been beaten? Even with our legendary\l"
	.string "POKéMON...$"

Text_NeoHideout_Map2_May_Intro::
	.string "May: Don't worry {PLAYER}, I brought\n"
	.string "backup!\p"
	.string "Wait, you beat them already?$"

Text_NeoHideout_Map2_Brendan_Intro::
	.string "Brendan: Don't worry {PLAYER}, I\n"
	.string "brought backup!\p"
	.string "Wait, you beat them already?$"

Text_NeoHideout_Map2_Wallace_Seems_So::
	.string "Wallace: It seems so. I must say, you've\n"
	.string "gotten even stronger since we fought\l"
	.string "for your Champion title. You certainly\l"
	.string "carry it well.\p"
	.string "Alright, I'll take care of handing these\n"
	.string "two over to the authorities, will you\l"
	.string "come quietly?$"

Text_NeoHideout_Map2_Archie_Yes::
	.string "Archie: Yes, we'll let our teams disband\n"
	.string "and atone for our crimes. Even\l"
	.string "JIRACHI's wish granting power couldn't\l"
	.string "give us what we needed to defeat\l"
	.string "{PLAYER}.\p"
	.string "But Maxie, when we get out, let's battle\n"
	.string "again.$"

Text_NeoHideout_Map2_Maxie_Yes::
	.string "Maxie: Haha, yes Archie, I'll be happy to\n"
	.string "face you again.$"

Text_NeoHideout_Map2_May_Take_Jirachi::
	.string "May: Sorry I didn't make it here sooner,\n"
	.string "I thought getting help would be the\l"
	.string "best course of action.\p"
	.string "But for now, I'll make sure JIRACHI gets\n"
	.string "back to Fabled Island alright. Maybe\l"
	.string "I'll spend some time training there too.$"

Text_NeoHideout_Map2_Brendan_Take_Jirachi::
	.string "Brendan: Sorry I didn't make it here\n"
	.string "sooner, I thought getting help would\l"
	.string "be the best course of action.\p"
	.string "But for now, I'll make sure JIRACHI gets\n"
	.string "back to Fabled Island alright. Maybe\l"
	.string "I'll spend some time training there too.$"

Text_NeoHideout_Map2_Meteor::
	.string "It's a meteor. Better leave it for the\n"
	.string "authorities.$"
