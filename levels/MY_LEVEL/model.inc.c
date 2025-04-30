Vtx MY_LEVEL_dl_Level_Mesh_mesh_layer_1_vtx_cull[8] = {
	{{ {-1354, 0, 6808}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1354, 3529, 6808}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1354, 3529, -1420}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1354, 0, -1420}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2679, 0, 6808}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2679, 3529, 6808}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2679, 3529, -1420}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2679, 0, -1420}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx MY_LEVEL_dl_Level_Mesh_mesh_layer_1_vtx_0[18] = {
	{{ {-286, 0, 500}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {1612, 0, -1420}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-286, 0, -1420}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {1612, 0, 500}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {81, 0, 2000}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {1244, 0, 2000}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {-1354, 0, 3820}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {2679, 0, 3820}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {-565, 0, 6808}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {1891, 0, 6808}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {-286, 0, -1420}, 0, {-16, -16}, {0, 0, 127, 255} }},
	{{ {1612, 0, -1420}, 0, {1008, -16}, {0, 0, 127, 255} }},
	{{ {1612, 3529, -1420}, 0, {1008, -16}, {0, 0, 127, 255} }},
	{{ {-286, 3498, -1420}, 0, {-16, -16}, {0, 0, 127, 255} }},
	{{ {-286, 0, 500}, 0, {-16, 1008}, {127, 0, 0, 255} }},
	{{ {-286, 0, -1420}, 0, {-16, -16}, {127, 0, 0, 255} }},
	{{ {-286, 3498, -1420}, 0, {-16, -16}, {127, 0, 0, 255} }},
	{{ {-286, 3498, 500}, 0, {-16, 1008}, {127, 0, 0, 255} }},
};

Gfx MY_LEVEL_dl_Level_Mesh_mesh_layer_1_tri_0[] = {
	gsSPVertex(MY_LEVEL_dl_Level_Mesh_mesh_layer_1_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSPEndDisplayList(),
};

Gfx mat_MY_LEVEL_dl_Grass_Example[] = {
	gsSPLightColor(LIGHT_1, 0x00FF00FF),
	gsSPLightColor(LIGHT_2, 0x007F00FF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_MY_LEVEL_dl_Grass_Example[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx MY_LEVEL_dl_Level_Mesh_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(MY_LEVEL_dl_Level_Mesh_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_MY_LEVEL_dl_Grass_Example),
	gsSPDisplayList(MY_LEVEL_dl_Level_Mesh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_MY_LEVEL_dl_Grass_Example),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

