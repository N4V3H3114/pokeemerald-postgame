AquaHideout_UnusedRubyMap1_MapScripts::
	.byte 0

NeoHideout_Map1_EventScript_NeoMagmaBattle1::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, NeoHideout_Map1_Magma_Grunt_1_Intro, NeoHideout_Map1_Magma_Grunt_1_Defeat
	msgbox NeoHideout_Map1_Magma_Grunt_1_Defeat, MSGBOX_NPC
	end


NeoHideout_Map1_EventScript_NeoAquaBattle1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, NeoHideout_Map1_Aqua_Grunt_1_Intro, NeoHideout_Map1_Aqua_Grunt_1_Defeat
	msgbox NeoHideout_Map1_Aqua_Grunt_1_Defeat, MSGBOX_NPC
	return


NeoHideout_Map1_EventScript_Aqua_NeoDoubleBattle1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, NeoHideout_Map1_Grunt_Double_Intro, NeoHideout_Map1_Grunt_Double_Defeat
	msgbox NeoHideout_Map1_Aqua_Grunt_2_PostBattle, MSGBOX_NPC
	return


NeoHideout_Map1_EventScript_Magma_NeoDoubleBattle1::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, NeoHideout_Map1_Grunt_Double_Intro, NeoHideout_Map1_Grunt_Double_Defeat
	msgbox NeoHideout_Map1_Magma_Grunt_2_PostBattle, MSGBOX_NPC
	return


NeoHideout_Map1_Aqua_Guard_Location::
	msgbox NeoHideout_Map1_Aqua_Guard_Location_Text, MSGBOX_NPC
	return


NeoHideout_Map1_Aqua_Guard_Motive::
	msgbox NeoHideout_Map1_Aqua_Guard_Motive_Text, MSGBOX_NPC
	return


NeoHideout_Map1_Magma_Grunt_1_Intro::
	.string "Haha surprised to see Aqua and Magma\n"
	.string "working together?\p"
	.string "We've banded together to take you\n"
	.string "down!$"

NeoHideout_Map1_Magma_Grunt_1_Defeat::
	.string "No worries, even if I am defeated, we\n"
	.string "have strong teamwork$"

NeoHideout_Map1_Aqua_Grunt_1_Intro::
	.string "You might expect me to say something\n"
	.string "like, 'where magma fails aqua will\l"
	.string "succeed' right?\p"
	.string "Well our new team is above petty\n"
	.string "squabbles, I'll avenge him!$"

NeoHideout_Map1_Aqua_Grunt_1_Defeat::
	.string "If I boasted like that anyway, it would\n"
	.string "be more embarassing when I lose$"

NeoHideout_Map1_Grunt_Double_Intro::
	.string "When Aqua and Magma combine, we're\n"
	.string "unstoppable!$"

NeoHideout_Map1_Grunt_Double_Defeat::
	.string "There's nothing worse than defeat$"

NeoHideout_Map1_Aqua_Grunt_2_PostBattle::
	.string "I don't beleive it, how could we lose?$"

NeoHideout_Map1_Magma_Grunt_2_PostBattle::
	.string "Hehe are you surprised to see Aqua and\n"
	.string "Magma dating? It's like Romeo and\l"
	.string "Juliet right?$"

NeoHideout_Map1_Aqua_Guard_Location_Text::
	.string "You may be tough, but we won't just let\n"
	.string "you through. Our bosses are away at\l"
	.string "Fabled Island.\p"
	.string "You haven't heard of it? It's south of\n"
	.string "Route 118.\p"
	.string "Whoops! I shouldn't have said that!$"

NeoHideout_Map1_Aqua_Guard_Motive_Text::
	.string "Hey do you remember us? We aren't gonna\n"
	.string "let you through. Our bosses are looking\l"
	.string "for some meteor that will make their\l"
	.string "dreams come true.\p"
	.string "Whoops! I talk too much!$"
