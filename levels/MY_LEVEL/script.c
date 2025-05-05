#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "make_const_nonconst.h"
#include "levels/MY_LEVEL/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_MY_LEVEL_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x7, _MY_LEVEL_segment_7SegmentRomStart, _MY_LEVEL_segment_7SegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, MY_LEVEL_area_1),
		WARP_NODE(0xF1, LEVEL_MY_HUB, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_MY_LEVEL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 0, 0, 0),
		OBJECT(MODEL_NONE, 1190, 80, 0, 0, 0, 0, (COOP_CM_TAKE_TURNS << 16), bhvSpawnCoopMario),
		OBJECT(MODEL_NONE, 733, 80, 0, 0, 0, 0, (COOP_CM_TAKE_TURNS << 16), bhvSpawnCoopMario),
		OBJECT(MODEL_NONE, 1190, 80, 5528, 0, 0, 0, (COOP_CM_NPC << 16), bhvSpawnCoopMario),
		OBJECT(MODEL_NONE, 756, 973, 0, 0, 0, 0, (0x0A << 16), bhvAirborneWarp),
		OBJECT(MODEL_PURPLE_SWITCH, 1358, 712, 6409, 0, 0, 0, 0x00000000, bhvCountPlate),
		OBJECT(MODEL_PURPLE_SWITCH, -40, 677, 6409, 0, 0, 0, 0x00000000, bhvCountPlate),
		OBJECT(MODEL_RAISE_PLATFORM, 614, 500, 6328, 0, 0, 0, (40 << 24) | (RAISE_PLATFORM_BP_COUNT_PLATE << 16), bhvRaisePlatform),
		TERRAIN(MY_LEVEL_area_1_collision),
		MACRO_OBJECTS(MY_LEVEL_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};