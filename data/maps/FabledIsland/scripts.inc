FabledIsland_MapScripts::
	.byte 0

FabledIsland_EventScript_PondWoman::
	msgbox FabledIsland_Left_Path_Woman_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoMagmaBattle1::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, FabledIsland_Neo_MagmaGrunt1_Intro_Text, FabledIsland_Neo_MagmaGrunt1_Defeat_Text
	msgbox FabledIsland_Neo_MagmaGrunt1_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoMagmaBattle2::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, FabledIsland_Neo_MagmaGrunt2_Intro_Text, FabledIsland_Neo_MagmaGrunt2_Defeat_Text
	msgbox FabledIsland_Neo_MagmaGrunt2_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoMagmaBattle3::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, FabledIsland_Neo_MagmaGrunt3_Intro_Text, FabledIsland_Neo_MagmaGrunt3_Defeat_Text
	msgbox FabledIsland_Neo_MagmaGrunt3_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoMagmaBattle4::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, FabledIsland_Neo_MagmaGrunt4_Intro_Text, FabledIsland_Neo_MagmaGrunt4_Defeat_Text
	msgbox FabledIsland_Neo_MagmaGrunt4_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoMagmaBattle5::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, FabledIsland_Neo_MagmaGrunt5_Intro_Text, FabledIsland_Neo_MagmaGrunt5_Defeat_Text
	msgbox FabledIsland_Neo_MagmaGrunt5_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoAquaBattle1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, FabledIsland_Neo_AquaGrunt1_Intro_Text, FabledIsland_Neo_AquaGrunt1_Defeat_Text
	msgbox FabledIsland_Neo_AquaGrunt1_Post_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoAquaBattle2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, FabledIsland_Neo_AquaGrunt2_Intro_Text, FabledIsland_Neo_AquaGrunt2_Defeat_Text
	msgbox FabledIsland_Neo_AquaGrunt2_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoAquaBattle3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, FabledIsland_Neo_AquaGrunt3_Intro_Text, FabledIsland_Neo_AquaGrunt3_Defeat_Text
	msgbox FabledIsland_Neo_AquaGrunt3_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoAquaBattle4::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, FabledIsland_Neo_AquaGrunt4_Intro_Text, FabledIsland_Neo_AquaGrunt4_Defeat_Text
	msgbox FabledIsland_Neo_AquaGrunt4_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_NeoAquaBattle5::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, FabledIsland_Neo_AquaGrunt5_Intro_Text, FabledIsland_Neo_AquaGrunt5_Defeat_Text
	msgbox FabledIsland_Neo_AquaGrunt5_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_AdminGarrett::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, FabledIsland_Garrett_Intro_Text, FabledIsland_Garrett_Defeat_Text
	msgbox FabledIsland_Garrett_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_EventScript_AdminTrevor::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, FabledIsland_Trevor_Intro_Text, FabledIsland_Trevor_Defeat_Text
	msgbox FabledIsland_Trevor_Defeat_Text, MSGBOX_NPC
	end


FabledIsland_FindItem_StarfBerry::
	finditem ITEM_STARF_BERRY
	return


FabledIsland_Neo_AquaGrunt1_Intro_Text::
	.string "I'm up first, and I'll guarantee this\n"
	.string "operation is a success!$"

FabledIsland_Neo_AquaGrunt1_Defeat_Text::
	.string "Bah, but it doesn't matter, we have more\n"
	.string "members waiting to take you on.$"

FabledIsland_Neo_AquaGrunt1_Post_Defeat_Text::
	.string "We brought lots of supplies with us to\n"
	.string "guarantee our success. If you run\l"
	.string "away, we'll be ready for your return.$"

FabledIsland_Neo_MagmaGrunt1_Intro_Text::
	.string "I hear this path has something really\n"
	.string "cool at the end. You're not gonna take\l"
	.string "it from me!$"

FabledIsland_Neo_MagmaGrunt1_Defeat_Text::
	.string "Ahaha I mean, we could share the\n"
	.string "treasure instead$"

FabledIsland_Neo_AquaGrunt2_Intro_Text::
	.string "Those rocks were too confusing for me\n"
	.string "and now I'm frustrated!\p"
	.string "Now I'll take it out on you, WRAAAHHHH!$"

FabledIsland_Neo_AquaGrunt2_Defeat_Text::
	.string "Ahh that really helped calm me down.\n"
	.string "Thanks!$"

FabledIsland_Left_Path_Woman_Text::
	.string "You've done well to make it here. As a\n"
	.string "reward you can try to get a pokemon\l"
	.string "from this pond. Maybe it can help you\l"
	.string "on your journey.$"

FabledIsland_Neo_MagmaGrunt2_Intro_Text::
	.string "Gah I don't have the right Pokemon for\n"
	.string "this!$"

FabledIsland_Neo_MagmaGrunt2_Defeat_Text::
	.string "Cut, Strength, Rock Smash, Surf,\n"
	.string "Waterfall... it's too much!$"

FabledIsland_Neo_AquaGrunt3_Intro_Text::
	.string "Do you see the holes around this area?\n"
	.string "It's from fallen meteorites. Cool\l"
	.string "Right?$"

FabledIsland_Neo_AquaGrunt3_Defeat_Text::
	.string "Oh well, now that I'm beaten I can go\n"
	.string "look at the cool craters.$"

FabledIsland_Neo_MagmaGrunt3_Intro_Text::
	.string "Ascending the giant mountain on Fabled\n"
	.string "Island... seems kind of exciting!$"

FabledIsland_Neo_MagmaGrunt3_Defeat_Text::
	.string "I'm glad I don't have to climb all the\n"
	.string "way up there$"

FabledIsland_Neo_AquaGrunt4_Intro_Text::
	.string "UWWWOOOAAAHHHH, I'll cool you down$"

FabledIsland_Neo_AquaGrunt4_Defeat_Text::
	.string "uwaahhh... I cooled too much$"

FabledIsland_Neo_MagmaGrunt4_Intro_Text::
	.string "FWOOOOSSHHH, I'll melt you!$"

FabledIsland_Neo_MagmaGrunt4_Defeat_Text::
	.string "ffsssshhhh, I fizzled out$"

FabledIsland_Neo_AquaGrunt5_Intro_Text::
	.string "We're just a taste of what's to come,\n"
	.string "our bosses are waiting for you ahead.$"

FabledIsland_Neo_AquaGrunt5_Defeat_Text::
	.string "Just wait till you face them.$"

FabledIsland_Neo_MagmaGrunt5_Intro_Text::
	.string "Our bosses are the strongest, we'll just\n"
	.string "soften you up for them$"

FabledIsland_Neo_MagmaGrunt5_Defeat_Text::
	.string "Maybe I lost because I'm relying too\n"
	.string "much on our boss$"

FabledIsland_Garrett_Intro_Text::
	.string "I heard the forecast calls for rain -\n"
	.string "don’t forget an umbrella!$"

FabledIsland_Garrett_Defeat_Text::
	.string "You really rained on our parade...$"

FabledIsland_Trevor_Intro_Text::
	.string "It’s looking like it’ll be sunny, I hope\n"
	.string "you brought your sunscreen!$"

FabledIsland_Trevor_Defeat_Text::
	.string "We must have burnt too brightly...$"
