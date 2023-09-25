Route135_MapScripts::
	.byte 0

FabledIslandBeachBoy::
	msgbox FabledIslandBeachBoy_Text, MSGBOX_NPC
	return


FabledIslandGardenWoman::
	msgbox FabledIslandGarden_Text, MSGBOX_NPC
	return


FabledIslandBeachBoy_Text::
	.string "Waaaaahh! These Pokemon are really\n"
	.string "scary!\p"
	.string "Hm? Wait you're {PLAYER} the Champion\n"
	.string "right? Are you here about those weird\l"
	.string "guys that showed up?\p"
	.string "...\p"
	.string "Wow that's awesome I get to meet the\n"
	.string "Champion before he goes into battle.\l"
	.string "I'm rooting for you!$"

FabledIslandGarden_Text::
	.string "This is Fabled Island. It is a home to\n"
	.string "many different Pokemon.\p"
	.string "The ones here are friendly, but the\n"
	.string "ones further in you must be careful of.$"
