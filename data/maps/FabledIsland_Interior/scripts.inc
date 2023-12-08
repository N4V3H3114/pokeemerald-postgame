FabledIsland_Interior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetupRivalGfxId
	.byte 0


SetupRivalGfxId::
	removeobject 13
	call Common_EventScript_SetupRivalGfxId
	return


FabledIsland_Interior_EnterRival::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FabledIsland_Interior_EnterRival_1
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	return

FabledIsland_Interior_EnterRival_1:
	playbgm MUS_ENCOUNTER_MAY, FALSE
	return


FabledIsland_Interior_Horde_Grunt_After_Fight_Script::
	msgbox FabledIsland_Interior_Horde_Grunt_After_Fight, MSGBOX_NPC
	return


FabledIsland_Interior_Rival_After_Fight::
	msgbox FabledIsland_Interior_Rival_Handle_This, MSGBOX_NPC
	return


FabledIsland_Interior_EventScript_Horde::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Walk_To_Center
	waitmovement OBJ_EVENT_ID_PLAYER
	playse SE_PIN
	addobject 1
	addobject 2
	addobject 3
	addobject 4
	addobject 5
	addobject 6
	addobject 7
	addobject 8
	addobject 9
	addobject 10
	addobject 11
	addobject 12
	addobject 13
	msgbox FabledIsland_Interior_StopRightThere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceUp
	applymovement 1, Horde_Grunt_Magma_1
	applymovement 2, Horde_Grunt_Aqua_2
	applymovement 3, Horde_Grunt_Aqua_3
	applymovement 4, Horde_Grunt_Magma_4
	applymovement 5, Horde_Grunt_Aqua_5
	applymovement 6, Horde_Grunt_Magma_6
	applymovement 7, Horde_Grunt_Magma_7
	applymovement 8, Horde_Grunt_Aqua_8
	applymovement 9, Horde_Grunt_Magma_9
	applymovement 10, Horde_Grunt_Aqua_10
	applymovement 11, Horde_Grunt_Aqua_11
	applymovement 12, Horde_Grunt_Magma_12
	waitmovement 12
	msgbox FabledIsland_Interior_BadTime, MSGBOX_DEFAULT
	msgbox FabledIsland_Interior_GotYouSurrounded, MSGBOX_DEFAULT
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq FabledIsland_Interior_EventScript_Horde_2
	msgbox FabledIsland_Interior_RivalEntry_Brendan, MSGBOX_DEFAULT
	closemessage
	applymovement 13, Rival_Walk_To_Center
	waitmovement 13
	msgbox FabledIsland_Interior_RivalAssure_Brendan, MSGBOX_DEFAULT
	applymovement 9, Horde_Grunt_Talk_Movement_9
	msgbox FabledIsland_Interior_ItDoesntMatter, MSGBOX_DEFAULT
FabledIsland_Interior_EventScript_Horde_1:
	applymovement 1, Horde_Grunt_1_Approach
	applymovement 2, Horde_Grunt_2_Approach
	waitmovement 1
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_10, FabledIsland_Interior_LoseText1
	applymovement 1, Horde_Grunt_1_Retreat
	applymovement 2, Horde_Grunt_2_Retreat
	waitmovement 1
	applymovement 3, Horde_Grunt_3_Approach
	applymovement 4, Horde_Grunt_4_Approach
	waitmovement 4
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_1, FabledIsland_Interior_LoseText2
	applymovement 3, Horde_Grunt_3_Retreat
	applymovement 4, Horde_Grunt_4_Retreat
	waitmovement 4
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq FabledIsland_Interior_EventScript_Horde_6
	msgbox FabledIsland_Interior_Rival_Brendan_Tired, MSGBOX_DEFAULT
	closemessage
FabledIsland_Interior_EventScript_Horde_5:
	applymovement 5, Horde_Grunt_5_Approach
	applymovement 6, Horde_Grunt_6_Approach
	waitmovement 6
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_2, FabledIsland_Interior_LoseText3
	applymovement 5, Horde_Grunt_5_Retreat
	applymovement 6, Horde_Grunt_6_Retreat
	waitmovement 6
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq FabledIsland_Interior_EventScript_Horde_10
	msgbox FabledIsland_Interior_Rival_Brendan_Ready, MSGBOX_DEFAULT
	closemessage
FabledIsland_Interior_EventScript_Horde_9:
	applymovement 7, Horde_Grunt_7_Approach
	applymovement 8, Horde_Grunt_8_Approach
	waitmovement 8
	special Script_OpenBagMenu
	waitstate
	applymovement 7, Horde_Grunt_7_Retreat
	applymovement 8, Horde_Grunt_8_Retreat
	waitmovement 8
	applymovement 9, Horde_Grunt_9_Approach
	applymovement 10, Horde_Grunt_10_Approach
	waitmovement 9
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_11, FabledIsland_Interior_LoseText4
	applymovement 9, Horde_Grunt_9_Retreat
	applymovement 10, Horde_Grunt_10_Retreat
	waitmovement 9
	applymovement 11, Horde_Grunt_11_Approach
	applymovement 12, Horde_Grunt_12_Approach
	waitmovement 11
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_3, FabledIsland_Interior_LoseText5
	applymovement 11, Horde_Grunt_11_Retreat
	applymovement 12, Horde_Grunt_12_Retreat
	waitmovement 11
	applymovement 9, Horde_Grunt_9_Walk_In_Place
	msgbox FabledIsland_Interior_Grunt_Not_Over, MSGBOX_DEFAULT
	closemessage
	addobject 14
	applymovement 14, Horde_Grunt_14_Approach
	applymovement 8, Horde_Grunt_8_Make_Room
	waitmovement 14
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_12, FabledIsland_Interior_LoseText6
	applymovement 14, Horde_Grunt_14_Retreat
	waitmovement 14
	addobject 15
	addobject 16
	addobject 17
	applymovement 15, Horde_Grunt_15_Enter
	waitmovement 15
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq FabledIsland_Interior_EventScript_Horde_14
	msgbox FabledIsland_Interior_Rival_Brendan_You_Go_Ahead, MSGBOX_DEFAULT
	closemessage
FabledIsland_Interior_EventScript_Horde_13:
	setvar VAR_GIFT_UNUSED_1, 1
	setflag FLAG_FABLED_ISLAND_HORDE_BEATEN
	releaseall
	return

FabledIsland_Interior_EventScript_Horde_2:
	msgbox FabledIsland_Interior_RivalEntry_May, MSGBOX_DEFAULT
	closemessage
	applymovement 13, Rival_Walk_To_Center
	waitmovement 13
	msgbox FabledIsland_Interior_RivalAssure_May, MSGBOX_DEFAULT
	applymovement 9, Horde_Grunt_Talk_Movement_9
	msgbox FabledIsland_Interior_ItDoesntMatter, MSGBOX_DEFAULT
	goto FabledIsland_Interior_EventScript_Horde_1

FabledIsland_Interior_EventScript_Horde_6:
	msgbox FabledIsland_Interior_Rival_May_Tired, MSGBOX_DEFAULT
	closemessage
	goto FabledIsland_Interior_EventScript_Horde_5

FabledIsland_Interior_EventScript_Horde_10:
	msgbox FabledIsland_Interior_Rival_May_Ready, MSGBOX_DEFAULT
	closemessage
	goto FabledIsland_Interior_EventScript_Horde_9

FabledIsland_Interior_EventScript_Horde_14:
	msgbox FabledIsland_Interior_Rival_May_You_Go_Ahead, MSGBOX_DEFAULT
	closemessage
	goto FabledIsland_Interior_EventScript_Horde_13


FabledIsland_Interior_EventScript_Dont_Leave::
	msgbox FabledIsland_Interior_Rival_Dont_Leave, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, Horde_Grunt_10_Approach
	return


FabledIsland_Interior_FindItem_MaxRevive::
	finditem ITEM_MAX_REVIVE
	return


Movement_Walk_To_Center:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	emote_exclamation_mark
	face_down
	step_end

PlayerFaceUp:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

Horde_Grunt_Talk_Movement_9:
	walk_in_place_down
	step_end

Horde_Grunt_Magma_1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	step_end

Horde_Grunt_Aqua_2:
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_in_place_left
	step_end

Horde_Grunt_Aqua_3:
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_in_place_down
	step_end

Horde_Grunt_Magma_4:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	step_end

Horde_Grunt_Aqua_5:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_down
	step_end

Horde_Grunt_Magma_6:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

Horde_Grunt_Magma_7:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_in_place_up
	step_end

Horde_Grunt_Aqua_8:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_in_place_down
	step_end

Horde_Grunt_Magma_9:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_in_place_down
	step_end

Horde_Grunt_Aqua_10:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Horde_Grunt_Aqua_11:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	step_end

Horde_Grunt_Magma_12:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

Rival_Walk_To_Center:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_in_place_down
	step_end

Horde_Grunt_1_Approach:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_down
	step_end

Horde_Grunt_1_Retreat:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_right
	step_end

Horde_Grunt_2_Approach:
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

Horde_Grunt_2_Retreat:
	walk_right
	walk_right
	walk_right
	walk_in_place_left
	step_end

Horde_Grunt_3_Approach:
	walk_left
	walk_left
	walk_down
	step_end

Horde_Grunt_4_Approach:
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Horde_Grunt_3_Retreat:
	walk_up
	walk_right
	walk_right
	face_down
	step_end

Horde_Grunt_4_Retreat:
	walk_down
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Horde_Grunt_5_Approach:
	walk_down
	walk_right
	walk_right
	walk_right
	face_down
	step_end

Horde_Grunt_5_Retreat:
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Horde_Grunt_6_Approach:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end

Horde_Grunt_6_Retreat:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	face_right
	step_end

Horde_Grunt_7_Approach:
	walk_up
	walk_up
	walk_up
	face_right
	step_end

Horde_Grunt_7_Retreat:
	walk_down
	walk_down
	walk_down
	face_up
	step_end

Horde_Grunt_8_Approach:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Horde_Grunt_8_Retreat:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

Horde_Grunt_9_Approach:
	walk_down
	walk_down
	walk_right
	face_down
	step_end

Horde_Grunt_9_Retreat:
	walk_left
	walk_up
	walk_up
	face_down
	step_end

Horde_Grunt_10_Approach:
	walk_up
	walk_up
	step_end

Horde_Grunt_10_Retreat:
	walk_down
	walk_down
	face_up
	step_end

Horde_Grunt_11_Approach:
	walk_left
	walk_left
	walk_left
	face_down
	step_end

Horde_Grunt_11_Retreat:
	walk_right
	walk_right
	walk_right
	face_left
	step_end

Horde_Grunt_12_Approach:
	walk_left
	walk_left
	walk_up
	step_end

Horde_Grunt_12_Retreat:
	walk_down
	walk_right
	walk_right
	face_left
	step_end

Horde_Grunt_9_Walk_In_Place:
	walk_in_place_down
	walk_in_place_down
	step_end

Horde_Grunt_14_Approach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Horde_Grunt_8_Make_Room:
	delay_16
	walk_right
	delay_16
	walk_left
	face_down
	step_end

Horde_Grunt_14_Retreat:
	walk_up
	walk_left
	walk_left
	face_down
	step_end

Horde_Grunt_15_Enter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

FabledIsland_Interior_StopRightThere::
	.string "Stop right there punk!$"

FabledIsland_Interior_BadTime::
	.string "He he he, hope we caught you at a bad\n"
	.string "time!$"

FabledIsland_Interior_GotYouSurrounded::
	.string "You may have beaten our Admins, but you\n"
	.string "can't beat all of us!\p"
	.string "You're strong, but our numbers will beat\n"
	.string "you and your POKéMON down. There will\l"
	.string "be no rest for you!\p"
	.string "Get ready for our\n"
	.string "Ultra-Neo-Gang-Beat-Up$"

FabledIsland_Interior_RivalEntry_May::
	.string "May: Now you hold it!$"

FabledIsland_Interior_RivalAssure_May::
	.string "May: I saw you chasing after the Aqua\n"
	.string "grunt, but you flew off before I could\l"
	.string "reach you. I always seem to be playing\l"
	.string "catch up...\p"
	.string "You may be the Champion, but that\n"
	.string "doesn't mean I'm going to sit back and\l"
	.string "watch. We're still rivals after all!$"

FabledIsland_Interior_RivalEntry_Brendan::
	.string "Brendan: Now you hold it!$"

FabledIsland_Interior_RivalAssure_Brendan::
	.string "Brendan: I saw you chasing after the\n"
	.string "Aqua grunt, but you flew off before I\l"
	.string "could reach you. I always seem to be\l"
	.string "playing catch up...\p"
	.string "You may be the Champion, but that\n"
	.string "doesn't mean I'm going to sit back and\l"
	.string "watch. We're still rivals after all!$"

FabledIsland_Interior_ItDoesntMatter::
	.string "Neo Grunt: Another one won't make a\n"
	.string "difference, we've got this, now let's\l"
	.string "stomp them!\p"
	.string "Grunts: YEAAAAAHHH!!!!$"

FabledIsland_Interior_LoseText1::
	.string "Tch, I had to go first.$"

FabledIsland_Interior_LoseText2::
	.string "Haha, well your friend there isn't\n"
	.string "looking too good.$"

FabledIsland_Interior_Rival_May_Tired::
	.string "May: Hey {PLAYER}, I'm sorry, I made a\n"
	.string "critical mistake in that last fight.\p"
	.string "I need some time to heal, please hold\n"
	.string "them off for me.$"

FabledIsland_Interior_Rival_Brendan_Tired::
	.string "Brendan: Hey {PLAYER}, I'm sorry, I\n"
	.string "made a critical mistake in that last\l"
	.string "fight.\p"
	.string "I need some time to heal, please hold\n"
	.string "them off for me.$"

FabledIsland_Interior_LoseText3::
	.string "No way, I think we blew our chance to\n"
	.string "win.$"

FabledIsland_Interior_Rival_May_Ready::
	.string "May: Ok I'm ready! Leave this next one\n"
	.string "to me, I'll give you time to heal.$"

FabledIsland_Interior_Rival_Brendan_Ready::
	.string "Brendan: Ok I'm ready! Leave this next\n"
	.string "one to me, I'll give you time to heal.$"

FabledIsland_Interior_LoseText4::
	.string "Hehe, I hope my explosive strategy\n"
	.string "ruined your healing.$"

FabledIsland_Interior_LoseText5::
	.string "Dang, we all were defeated by you.$"

FabledIsland_Interior_Grunt_Not_Over::
	.string "You're good to beat all of us...\p"
	.string "But we've got another ace up our\n"
	.string "sleeve!$"

FabledIsland_Interior_LoseText6::
	.string "Even our extra sneak attack failed.$"

FabledIsland_Interior_Rival_May_You_Go_Ahead::
	.string "May: There's no end to them, and our\n"
	.string "POKéMON are getting tired.\p"
	.string "You go ahead, I'll hold them off as long\n"
	.string "as I can!$"

FabledIsland_Interior_Rival_Brendan_You_Go_Ahead::
	.string "Brendan: There's no end to them, and\n"
	.string "our POKéMON are getting tired.\p"
	.string "You go ahead, I'll hold them off as long\n"
	.string "as I can!$"

FabledIsland_Interior_Rival_Handle_This::
	.string "You go ahead, I'll handle this.$"

FabledIsland_Interior_Horde_Grunt_After_Fight::
	.string "I better heal my POKéMON to jump back\n"
	.string "in and help.$"

FabledIsland_Interior_Rival_Dont_Leave::
	.string "Hey! Don't leave me here!$"
