Route122_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route122_OnLoad
	.byte 0

Route122_OnLoad:
	call_if_set FLAG_NEO_AQUA_LILYCOVE_MET, Script_Open_Route_135
	end


Script_Open_Route_135::
	setmetatile 37, 17, METATILE_General_CalmWater, FALSE
	setmetatile 37, 18, METATILE_General_CalmWater, FALSE
	setmetatile 38, 17, METATILE_General_CalmWater, FALSE
	setmetatile 38, 18, METATILE_General_CalmWater, FALSE
	setmetatile 39, 19, METATILE_General_CalmWater, FALSE
	setmetatile 39, 20, METATILE_General_CalmWater, FALSE
	setmetatile 40, 19, METATILE_General_CalmWater, FALSE
	setmetatile 40, 20, METATILE_General_CalmWater, FALSE
	end