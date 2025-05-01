Vtx MY_HUB_dl_Level_Mesh_mesh_layer_1_vtx_cull[8] = {
	{{ {-500, 0, 500}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-500, 48, 500}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-500, 48, -500}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-500, 0, -500}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {500, 0, 500}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {500, 48, 500}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {500, 48, -500}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {500, 0, -500}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx MY_HUB_dl_Level_Mesh_mesh_layer_1_vtx_0[28] = {
	{{ {121, 0, 173}, 0, {620, 372}, {0, 0, 129, 255} }},
	{{ {-121, 0, 173}, 0, {372, 372}, {0, 0, 129, 255} }},
	{{ {-121, 48, 173}, 0, {372, 372}, {0, 0, 129, 255} }},
	{{ {121, 48, 173}, 0, {620, 372}, {0, 0, 129, 255} }},
	{{ {-121, 48, 415}, 0, {372, 620}, {0, 127, 0, 255} }},
	{{ {121, 48, 415}, 0, {620, 620}, {0, 127, 0, 255} }},
	{{ {121, 48, 173}, 0, {620, 372}, {0, 127, 0, 255} }},
	{{ {-121, 48, 173}, 0, {372, 372}, {0, 127, 0, 255} }},
	{{ {-121, 0, 415}, 0, {372, 620}, {0, 0, 127, 255} }},
	{{ {121, 0, 415}, 0, {620, 620}, {0, 0, 127, 255} }},
	{{ {121, 48, 415}, 0, {620, 620}, {0, 0, 127, 255} }},
	{{ {-121, 48, 415}, 0, {372, 620}, {0, 0, 127, 255} }},
	{{ {121, 0, 415}, 0, {620, 620}, {127, 0, 0, 255} }},
	{{ {121, 0, 173}, 0, {620, 372}, {127, 0, 0, 255} }},
	{{ {121, 48, 173}, 0, {620, 372}, {127, 0, 0, 255} }},
	{{ {121, 48, 415}, 0, {620, 620}, {127, 0, 0, 255} }},
	{{ {-121, 0, 173}, 0, {372, 372}, {129, 0, 0, 255} }},
	{{ {-121, 0, 415}, 0, {372, 620}, {129, 0, 0, 255} }},
	{{ {-121, 48, 415}, 0, {372, 620}, {129, 0, 0, 255} }},
	{{ {-121, 48, 173}, 0, {372, 372}, {129, 0, 0, 255} }},
	{{ {-121, 0, 415}, 0, {372, 620}, {0, 127, 0, 255} }},
	{{ {-121, 0, 173}, 0, {372, 372}, {0, 127, 0, 255} }},
	{{ {-500, 0, -500}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {500, 0, -500}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {121, 0, 173}, 0, {620, 372}, {0, 127, 0, 255} }},
	{{ {500, 0, 500}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {121, 0, 415}, 0, {620, 620}, {0, 127, 0, 255} }},
	{{ {-500, 0, 500}, 0, {-16, 1008}, {0, 127, 0, 255} }},
};

Gfx MY_HUB_dl_Level_Mesh_mesh_layer_1_tri_0[] = {
	gsSPVertex(MY_HUB_dl_Level_Mesh_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
	gsSP2Triangles(21, 24, 23, 0, 24, 25, 23, 0),
	gsSP2Triangles(24, 26, 25, 0, 26, 27, 25, 0),
	gsSP2Triangles(26, 20, 27, 0, 20, 22, 27, 0),
	gsSPEndDisplayList(),
};

Gfx mat_MY_HUB_dl_Grass_Example[] = {
	gsSPLightColor(LIGHT_1, 0x00FF00FF),
	gsSPLightColor(LIGHT_2, 0x7F7F7FFF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_MY_HUB_dl_Grass_Example[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx MY_HUB_dl_Level_Mesh_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(MY_HUB_dl_Level_Mesh_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_MY_HUB_dl_Grass_Example),
	gsSPDisplayList(MY_HUB_dl_Level_Mesh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_MY_HUB_dl_Grass_Example),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

