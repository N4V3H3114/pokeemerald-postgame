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
	goto_if_eq FabledIsland_Interior_EventScript_Horde_1
	return

FabledIsland_Interior_EventScript_Horde_1:
	msgbox FabledIsland_Interior_RivalEntry_May, MSGBOX_DEFAULT
	closemessage
	applymovement 13, Rival_Walk_To_Center
	waitmovement 13
	msgbox FabledIsland_Interior_RivalAssure_May, MSGBOX_DEFAULT
	applymovement 9, Horde_Grunt_Talk_Movement_9
	msgbox FabledIsland_Interior_ItDoesntMatter, MSGBOX_DEFAULT
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

FabledIsland_Interior_StopRightThere::
	.string "Stop right there punk!$"

FabledIsland_Interior_BadTime::
	.string "He he he, hope we caught you at a bad\n"
	.string "time!$"

FabledIsland_Interior_GotYouSurrounded::
	.string "You may have beaten our Admins, but you\n"
	.string "can't beat all of us!\p"
	.string "You're strong, but our numbers will beat\n"
	.string "you and your Pokemon down. There will\l"
	.string "be no rest for you!\p"
	.string "Get ready for our\n"
	.string "Ultra-Neo-Gang-Beat-Up$"

FabledIsland_Interior_RivalEntry_May::
	.string "May: Now you hold it!$"

FabledIsland_Interior_RivalAssure_May::
	.string "May: When I saw you chasing the Aqua\n"
	.string "grunt, and seeing a new base, then\l"
	.string "watching you fly off... I couldn't just\l"
	.string "sit by and watch.\p"
	.string "We're rivals right? And if we fight\n"
	.string "together, then no matter how many\l"
	.string "there are, we can finish them together!$"

FabledIsland_Interior_RivalEntry_Brendan::
	.string "Brendan: Now you hold it!$"

FabledIsland_Interior_RivalAssure_Brendan::
	.string "Brendan: When I saw you chasing the\n"
	.string "Aqua grunt, and seeing a new base, then\l"
	.string "watching you fly off... I couldn't just\l"
	.string "sit by and watch.\p"
	.string "We're rivals right? And if we fight\n"
	.string "together, then no matter how many\l"
	.string "there are, we can finish them together!$"

FabledIsland_Interior_ItDoesntMatter::
	.string "Neo Grunt: Another one won't make a\n"
	.string "difference, we've got this, now let's\l"
	.string "stomp them!\p"
	.string "Grunts: YEAAAAAHHH!!!!$"
