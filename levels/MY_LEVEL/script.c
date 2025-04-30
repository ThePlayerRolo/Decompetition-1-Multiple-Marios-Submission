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
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, MY_LEVEL_area_1),
		MARIO_POS(0x01, 0, 0, 80, 0),
		OBJECT(MODEL_NONE, 1190, 80, 0, 0, 0, 0, (COOP_CM_TAKE_TURNS << 16), bhvSpawnCoopMario),
		OBJECT(MODEL_NONE, 1190, 80, 5528, 0, 0, 0, (COOP_CM_NPC << 16), bhvSpawnCoopMario),
		TERRAIN(MY_LEVEL_area_1_collision),
		MACRO_OBJECTS(MY_LEVEL_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 80, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};