FabledIsland_Interior_Summit_MapScripts::
	.byte 0

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
	removeobject 5
	fadescreen FADE_FROM_BLACK
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, FabledIsland_Summit_Pan_Down
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_GIFT_UNUSED_1, 2
	setflag FLAG_FABLED_ISLAND_FINISH
	return


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
