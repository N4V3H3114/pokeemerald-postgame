Route135_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION Route135_OnLoad
	.byte 0

	Route135_OnLoad:
	goto FabledIsland_Reset_Grunts
	end

FabledIsland_Reset_Grunts::
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_1
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_2
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_3
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_4
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_5
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_6
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_7
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_8
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_9
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_1
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_2
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_3
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_4
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_5
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_6
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_7
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_8
	cleartrainerflag TRAINER_GRUNT_SEAFLOOR_CAVERN_1
	cleartrainerflag TRAINER_GRUNT_SEAFLOOR_CAVERN_2
	cleartrainerflag TRAINER_GRUNT_SEAFLOOR_CAVERN_3
	cleartrainerflag TRAINER_GRUNT_SEAFLOOR_CAVERN_4
	cleartrainerflag TRAINER_GRUNT_SEAFLOOR_CAVERN_5
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_10
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_11
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_12
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_13
	cleartrainerflag TRAINER_GRUNT_MAGMA_HIDEOUT_14
	return


FabledIslandBeachBoy::
	msgbox FabledIslandBeachBoy_Text, MSGBOX_NPC
	return


FabledIslandGardenWoman::
	msgbox FabledIslandGarden_Text, MSGBOX_NPC
	return


FabledIslandGardenSign::
	msgbox FabledIslandSign_Text, MSGBOX_SIGN
	return


FabledIslandTrees::
	msgbox FabledIslandTrees_Text, MSGBOX_SIGN
	return


FabledIslandWillYouSaveIt::
	applymovement 3, WillYouSaveIt_FacePlayer
	msgbox TreasuresOfTheIsland_Text, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq FabledIslandWillYouSaveIt_1
	msgbox TreasuresOfTheIsland_No_Text, MSGBOX_NPC
	return

FabledIslandWillYouSaveIt_1:
	msgbox TreasuresOfTheIsland_Yes_Text, MSGBOX_NPC
	return


WillYouSaveIt_FacePlayer:
	face_player
	step_end

FabledIslandStatue::
	msgbox FabledIslandStatue_Text, MSGBOX_SIGN
	return


FabledIsland_Route135_EventScript_NeoMagmaBattle1::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, FabledIsland_Route135_Magma_Grunt_1_Intro, FabledIsland_Route135_Magma_Grunt_1_Defeat
	msgbox NeoHideout_Map1_Magma_Grunt_1_Defeat, MSGBOX_NPC
	end


Route135_FindItem_MaxRevive::
	finditem ITEM_MAX_REVIVE
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

FabledIslandSign_Text::
	.string "Little Garden\n"
	.string "Watch where you tred$"

TreasuresOfTheIsland_Text::
	.string "I'm afraid something has fallen to the\n"
	.string "island and needs rescuing. Are you here\l"
	.string "to save it?$"

TreasuresOfTheIsland_Yes_Text::
	.string "Good, you should know then that there's\n"
	.string "lots of hidden treasurs on this island.\l"
	.string "They are yours if you come across them.$"

TreasuresOfTheIsland_No_Text::
	.string "Then you should leave.$"

FabledIslandTrees_Text::
	.string "This tree gives a tropical feel. It is\n"
	.string "very different from other trees in\l"
	.string "Hoenn.$"

FabledIslandStatue_Text::
	.string "This statue resembles a Pokemon. It\n"
	.string "looks very old.$"

FabledIsland_Route135_Magma_Grunt_1_Intro::
	.string "Hee hee, I got left behind wandering\n"
	.string "around too much, but because of that,\l"
	.string "I can battle you!$"

FabledIsland_Route135_Magma_Grunt_1_Defeat::
	.string "Darn, I should have just wandered away\n"
	.string "from you instead.$"
