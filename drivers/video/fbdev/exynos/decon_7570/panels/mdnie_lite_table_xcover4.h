#ifndef __MDNIE_TABLE_H__
#define __MDNIE_TABLE_H__

/* 2016.12.29 */

static struct mdnie_scr_info scr_info = {
	.index = 2,
	.color_blind = 1,	/* ASCR_WIDE_CR[7:0] */
	.white_r = 19,		/* ASCR_WIDE_WR[7:0] */
	.white_g = 21,		/* ASCR_WIDE_WG[7:0] */
	.white_b = 23		/* ASCR_WIDE_WB[7:0] */
};

static struct mdnie_night_info night_info = {
	.index_max_num = 11,
	.index_size = 24
};

static inline int color_offset_f1(int x, int y)
{
	return ((y << 10) - (((x << 10) * 99) / 91) - (6 << 10)) >> 10;
}
static inline int color_offset_f2(int x, int y)
{
	return ((y << 10) - (((x << 10) * 164) / 157) - (8 << 10)) >> 10;
}
static inline int color_offset_f3(int x, int y)
{
	return ((y << 10) + (((x << 10) * 218) / 39) - (20166 << 10)) >> 10;
}
static inline int color_offset_f4(int x, int y)
{
	return ((y << 10) + (((x << 10) * 23) / 8) - (11610 << 10)) >> 10;
}

static unsigned char night_mode_data[] = {
	0x00, 0xf1, 0xfa, 0x00, 0xff, 0x00, 0xf1, 0x00, 0x00, 0xfa, 0xff, 0x00, 0xf1, 0x00, 0xfa, 0x00, 0x00, 0xff, 0xf1, 0x00, 0xfa, 0x00, 0xff, 0x00, /* 6500K */
	0x00, 0xeb, 0xf8, 0x00, 0xff, 0x00, 0xeb, 0x00, 0x00, 0xf8, 0xff, 0x00, 0xeb, 0x00, 0xf8, 0x00, 0x00, 0xff, 0xeb, 0x00, 0xf8, 0x00, 0xff, 0x00, /* 6100K */
	0x00, 0xe2, 0xf5, 0x00, 0xff, 0x00, 0xe2, 0x00, 0x00, 0xf5, 0xff, 0x00, 0xe2, 0x00, 0xf5, 0x00, 0x00, 0xff, 0xe2, 0x00, 0xf5, 0x00, 0xff, 0x00, /* 5700K */
	0x00, 0xda, 0xf2, 0x00, 0xff, 0x00, 0xda, 0x00, 0x00, 0xf2, 0xff, 0x00, 0xda, 0x00, 0xf2, 0x00, 0x00, 0xff, 0xda, 0x00, 0xf2, 0x00, 0xff, 0x00, /* 5300K */
	0x00, 0xd0, 0xee, 0x00, 0xff, 0x00, 0xd0, 0x00, 0x00, 0xee, 0xff, 0x00, 0xd0, 0x00, 0xee, 0x00, 0x00, 0xff, 0xd0, 0x00, 0xee, 0x00, 0xff, 0x00, /* 4900K */
	0x00, 0xc4, 0xe9, 0x00, 0xff, 0x00, 0xc4, 0x00, 0x00, 0xe9, 0xff, 0x00, 0xc4, 0x00, 0xe9, 0x00, 0x00, 0xff, 0xc4, 0x00, 0xe9, 0x00, 0xff, 0x00, /* 4500K */
	0x00, 0xb4, 0xe3, 0x00, 0xff, 0x00, 0xb4, 0x00, 0x00, 0xe3, 0xff, 0x00, 0xb4, 0x00, 0xe3, 0x00, 0x00, 0xff, 0xb4, 0x00, 0xe3, 0x00, 0xff, 0x00, /* 4100K */
	0x00, 0xa4, 0xdd, 0x00, 0xff, 0x00, 0xa4, 0x00, 0x00, 0xdd, 0xff, 0x00, 0xa4, 0x00, 0xdd, 0x00, 0x00, 0xff, 0xa4, 0x00, 0xdd, 0x00, 0xff, 0x00, /* 3700K */
	0x00, 0x91, 0xd6, 0x00, 0xff, 0x00, 0x91, 0x00, 0x00, 0xd6, 0xff, 0x00, 0x91, 0x00, 0xd6, 0x00, 0x00, 0xff, 0x91, 0x00, 0xd6, 0x00, 0xff, 0x00, /* 3300K */
	0x00, 0x7b, 0xcb, 0x00, 0xff, 0x00, 0x7b, 0x00, 0x00, 0xcb, 0xff, 0x00, 0x7b, 0x00, 0xcb, 0x00, 0x00, 0xff, 0x7b, 0x00, 0xcb, 0x00, 0xff, 0x00, /* 2900K */
	0x00, 0x68, 0xbe, 0x00, 0xff, 0x00, 0x68, 0x00, 0x00, 0xbe, 0xff, 0x00, 0x68, 0x00, 0xbe, 0x00, 0x00, 0xff, 0x68, 0x00, 0xbe, 0x00, 0xff, 0x00  /* 2500K */	
};

/* color coordination order is WR, WG, WB */
static unsigned char coordinate_data_1[] = {
	0xff, 0xff, 0xff, /* dummy */
	0xff, 0xff, 0xff, /* Tune_1 */
	0xff, 0xff, 0xff, /* Tune_2 */
	0xff, 0xff, 0xff, /* Tune_3 */
	0xff, 0xff, 0xff, /* Tune_4 */
	0xff, 0xff, 0xff, /* Tune_5 */
	0xff, 0xff, 0xff, /* Tune_6 */
	0xff, 0xff, 0xff, /* Tune_7 */
	0xff, 0xff, 0xff, /* Tune_8 */
	0xff, 0xff, 0xff, /* Tune_9 */
};

static unsigned char *coordinate_data[MODE_MAX] = {
	coordinate_data_1,
	coordinate_data_1,
	coordinate_data_1,
	coordinate_data_1,
	coordinate_data_1,
	coordinate_data_1,
};

static inline int get_hbm_index(int idx)
{
	int i = 0;
	int idx_list[] = {
		20000	/* idx < 20000: HBM_OFF */
				/* idx >= 20000: HBM_ON */
	};

	while (i < ARRAY_SIZE(idx_list)) {
		if (idx < idx_list[i])
			break;
		i++;
	}

	return i;
}

static unsigned char LEVEL_UNLOCK[] = {
	0xF0,
	0x5A, 0x5A
};

static unsigned char LEVEL_LOCK[] = {
	0xF0,
	0xA5, 0xA5
};

static unsigned char BYPASS_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char BYPASS_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char BYPASS_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char BYPASS_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char BYPASS_5[] = {
0xEC,
0x04, //cc r1
0x00,
0x00, //cc r2
0x00,
0x00, //cc r3
0x00,
0x00, //cc g1
0x00,
0x04, //cc g2
0x00,
0x00, //cc g3
0x00,
0x00, //cc b1
0x00,
0x00, //cc b2
0x00,
0x04, //cc b3
0x00,
};

static unsigned char BYPASS_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x00, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x00, //sharpen cc gamma 00 0 0
//end
};

static unsigned char NEGATIVE_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char NEGATIVE_2[] = {
0xE9,
0xff, //scr Cr Yb
0x00, //scr Rr Bb
0x00, //scr Cg Yg
0xff, //scr Rg Bg
0x00, //scr Cb Yr
0xff, //scr Rb Br
0x00, //scr Mr Mb
0xff, //scr Gr Gb
0xff, //scr Mg Mg
0x00, //scr Gg Gg
0x00, //scr Mb Mr
0xff, //scr Gb Gr
0x00, //scr Yr Cb
0xff, //scr Br Rb
0x00, //scr Yg Cg
0xff, //scr Bg Rg
0xff, //scr Yb Cr
0x00, //scr Bb Rr
0x00, //scr Wr Wb
0xff, //scr Kr Kb
0x00, //scr Wg Wg
0xff, //scr Kg Kg
0x00, //scr Wb Wr
0xff, //scr Kb Kr
};

static unsigned char NEGATIVE_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char NEGATIVE_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char NEGATIVE_5[] = {
0xEC,
0x04, //cc r1
0x00,
0x00, //cc r2
0x00,
0x00, //cc r3
0x00,
0x00, //cc g1
0x00,
0x04, //cc g2
0x00,
0x00, //cc g3
0x00,
0x00, //cc b1
0x00,
0x00, //cc b2
0x00,
0x04, //cc b3
0x00,
};

static unsigned char NEGATIVE_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x00, //sharpen cc gamma 00 0 0
//end
};

static unsigned char GRAYSCALE_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char GRAYSCALE_2[] = {
0xE9,
0xb3, //scr Cr Yb
0x4c, //scr Rr Bb
0xb3, //scr Cg Yg
0x4c, //scr Rg Bg
0xb3, //scr Cb Yr
0x4c, //scr Rb Br
0x69, //scr Mr Mb
0x96, //scr Gr Gb
0x69, //scr Mg Mg
0x96, //scr Gg Gg
0x69, //scr Mb Mr
0x96, //scr Gb Gr
0xe2, //scr Yr Cb
0x1d, //scr Br Rb
0xe2, //scr Yg Cg
0x1d, //scr Bg Rg
0xe2, //scr Yb Cr
0x1d, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char GRAYSCALE_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char GRAYSCALE_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char GRAYSCALE_5[] = {
0xEC,
0x04, //cc r1
0x00,
0x00, //cc r2
0x00,
0x00, //cc r3
0x00,
0x00, //cc g1
0x00,
0x04, //cc g2
0x00,
0x00, //cc g3
0x00,
0x00, //cc b1
0x00,
0x00, //cc b2
0x00,
0x04, //cc b3
0x00,
};

static unsigned char GRAYSCALE_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x00, //sharpen cc gamma 00 0 0
//end
};

static unsigned char GRAYSCALE_NEGATIVE_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char GRAYSCALE_NEGATIVE_2[] = {
0xE9,
0x4c, //scr Cr Yb
0xb3, //scr Rr Bb
0x4c, //scr Cg Yg
0xb3, //scr Rg Bg
0x4c, //scr Cb Yr
0xb3, //scr Rb Br
0x96, //scr Mr Mb
0x69, //scr Gr Gb
0x96, //scr Mg Mg
0x69, //scr Gg Gg
0x96, //scr Mb Mr
0x69, //scr Gb Gr
0x1d, //scr Yr Cb
0xe2, //scr Br Rb
0x1d, //scr Yg Cg
0xe2, //scr Bg Rg
0x1d, //scr Yb Cr
0xe2, //scr Bb Rr
0x00, //scr Wr Wb
0xff, //scr Kr Kb
0x00, //scr Wg Wg
0xff, //scr Kg Kg
0x00, //scr Wb Wr
0xff, //scr Kb Kr
};

static unsigned char GRAYSCALE_NEGATIVE_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char GRAYSCALE_NEGATIVE_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char GRAYSCALE_NEGATIVE_5[] = {
0xEC,
0x04, //cc r1
0x00,
0x00, //cc r2
0x00,
0x00, //cc r3
0x00,
0x00, //cc g1
0x00,
0x04, //cc g2
0x00,
0x00, //cc g3
0x00,
0x00, //cc b1
0x00,
0x00, //cc b2
0x00,
0x04, //cc b3
0x00,
};

static unsigned char GRAYSCALE_NEGATIVE_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x00, //sharpen cc gamma 00 0 0
//end
};

static unsigned char UI_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char UI_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char UI_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char UI_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char UI_5[] = {
0xEC,
0x04, //cc r1 0.15
0x6c,
0x1f, //cc r2
0xa6,
0x1f, //cc r3
0xee,
0x1f, //cc g1
0xd2,
0x04, //cc g2
0x40,
0x1f, //cc g3
0xee,
0x1f, //cc b1
0xd2,
0x1f, //cc b2
0xa6,
0x04, //cc b3
0x88,
};

static unsigned char UI_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x02, //sharpen cc gamma 00 0 0
//end
};

static unsigned char VIDEO_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char VIDEO_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char VIDEO_3[] = {
0xEA,
0x00, //curve 1 b
0x1c, //curve 1 a
0x00, //curve 2 b
0x1c, //curve 2 a
0x00, //curve 3 b
0x1c, //curve 3 a
0x00, //curve 4 b
0x1c, //curve 4 a
0x00, //curve 5 b
0x1c, //curve 5 a
0x00, //curve 6 b
0x1c, //curve 6 a
0x00, //curve 7 b
0x1c, //curve 7 a
0x00, //curve 8 b
0x1c, //curve 8 a
0x00, //curve 9 b
0x1c, //curve 9 a
0x00, //curve10 b
0x1c, //curve10 a
0x00, //curve11 b
0x1c, //curve11 a
0x00, //curve12 b
0x1c, //curve12 a
};

static unsigned char VIDEO_4[] = {
0xEB,
0x00, //curve13 b
0x1c, //curve13 a
0x0d, //curve14 b
0xa4, //curve14 a
0x0d, //curve15 b
0xa4, //curve15 a
0x0d, //curve16 b
0xa4, //curve16 a
0x0d, //curve17 b
0xa4, //curve17 a
0x0d, //curve18 b
0xa4, //curve18 a
0x0d, //curve19 b
0xa4, //curve19 a
0x0d, //curve20 b
0xa4, //curve20 a
0x0d, //curve21 b
0xa4, //curve21 a
0x25, //curve22 b
0x1c, //curve22 a
0x4a, //curve23 b
0x17, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char VIDEO_5[] = {
0xEC,
0x04, //cc r1 0.15
0x6c,
0x1f, //cc r2
0xa6,
0x1f, //cc r3
0xee,
0x1f, //cc g1
0xd2,
0x04, //cc g2
0x40,
0x1f, //cc g3
0xee,
0x1f, //cc b1
0xd2,
0x1f, //cc b2
0xa6,
0x04, //cc b3
0x88,
};

static unsigned char VIDEO_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x03, //sharpen cc gamma 00 0 0
//end
};

static unsigned char CAMERA_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char CAMERA_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char CAMERA_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char CAMERA_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char CAMERA_5[] = {
0xEC,
0x04, //cc r1 0.15
0x6c,
0x1f, //cc r2
0xa6,
0x1f, //cc r3
0xee,
0x1f, //cc g1
0xd2,
0x04, //cc g2
0x40,
0x1f, //cc g3
0xee,
0x1f, //cc b1
0xd2,
0x1f, //cc b2
0xa6,
0x04, //cc b3
0x88,
};

static unsigned char CAMERA_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x02, //sharpen cc gamma 00 0 0
//end
};

static unsigned char GALLERY_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char GALLERY_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char GALLERY_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char GALLERY_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char GALLERY_5[] = {
0xEC,
0x04, //cc r1 0.15
0x6c,
0x1f, //cc r2
0xa6,
0x1f, //cc r3
0xee,
0x1f, //cc g1
0xd2,
0x04, //cc g2
0x40,
0x1f, //cc g3
0xee,
0x1f, //cc b1
0xd2,
0x1f, //cc b2
0xa6,
0x04, //cc b3
0x88,
};

static unsigned char GALLERY_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x02, //sharpen cc gamma 00 0 0
//end
};

static unsigned char VT_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char VT_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char VT_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char VT_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char VT_5[] = {
0xEC,
0x04, //cc r1 0.15
0x6c,
0x1f, //cc r2
0xa6,
0x1f, //cc r3
0xee,
0x1f, //cc g1
0xd2,
0x04, //cc g2
0x40,
0x1f, //cc g3
0xee,
0x1f, //cc b1
0xd2,
0x1f, //cc b2
0xa6,
0x04, //cc b3
0x88,
};

static unsigned char VT_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x06, //sharpen cc gamma 00 0 0
//end
};

static unsigned char BROWSER_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char BROWSER_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char BROWSER_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char BROWSER_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char BROWSER_5[] = {
0xEC,
0x04, //cc r1 0.15
0x6c,
0x1f, //cc r2
0xa6,
0x1f, //cc r3
0xee,
0x1f, //cc g1
0xd2,
0x04, //cc g2
0x40,
0x1f, //cc g3
0xee,
0x1f, //cc b1
0xd2,
0x1f, //cc b2
0xa6,
0x04, //cc b3
0x88,
};

static unsigned char BROWSER_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x02, //sharpen cc gamma 00 0 0
//end
};

static unsigned char EBOOK_UI_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char EBOOK_UI_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xf7, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xe5, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char EBOOK_UI_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char EBOOK_UI_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char EBOOK_UI_5[] = {
0xEC,
0x04, //cc r1
0x00,
0x00, //cc r2
0x00,
0x00, //cc r3
0x00,
0x00, //cc g1
0x00,
0x04, //cc g2
0x00,
0x00, //cc g3
0x00,
0x00, //cc b1
0x00,
0x00, //cc b2
0x00,
0x04, //cc b3
0x00,
};

static unsigned char EBOOK_UI_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x00, //sharpen cc gamma 00 0 0
//end
};

static unsigned char EMAIL_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static unsigned char EMAIL_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xfe, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xf5, //scr Wb Wr
0x00, //scr Kb Kr
};

static unsigned char EMAIL_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static unsigned char EMAIL_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static unsigned char EMAIL_5[] = {
0xEC,
0x04, //cc r1
0x00,
0x00, //cc r2
0x00,
0x00, //cc r3
0x00,
0x00, //cc g1
0x00,
0x04, //cc g2
0x00,
0x00, //cc g3
0x00,
0x00, //cc b1
0x00,
0x00, //cc b2
0x00,
0x04, //cc b3
0x00,
};

static unsigned char EMAIL_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x00, //sharpen cc gamma 00 0 0
//end
};

static char OUTDOOR_MDNIE_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static char OUTDOOR_MDNIE_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static char OUTDOOR_MDNIE_3[] = {
0xEA,
0x00, //curve 1 b
0x7b, //curve 1 a
0x03, //curve 2 b
0x48, //curve 2 a
0x08, //curve 3 b
0x32, //curve 3 a
0x08, //curve 4 b
0x32, //curve 4 a
0x08, //curve 5 b
0x32, //curve 5 a
0x08, //curve 6 b
0x32, //curve 6 a
0x08, //curve 7 b
0x32, //curve 7 a
0x10, //curve 8 b
0x28, //curve 8 a
0x10, //curve 9 b
0x28, //curve 9 a
0x10, //curve10 b
0x28, //curve10 a
0x10, //curve11 b
0x28, //curve11 a
0x10, //curve12 b
0x28, //curve12 a
};

static char OUTDOOR_MDNIE_4[] = {
0xEB,
0x19, //curve13 b
0x22, //curve13 a
0x19, //curve14 b
0x22, //curve14 a
0x19, //curve15 b
0x22, //curve15 a
0x19, //curve16 b
0x22, //curve16 a
0x19, //curve17 b
0x22, //curve17 a
0x19, //curve18 b
0x22, //curve18 a
0x23, //curve19 b
0x1e, //curve19 a
0x2e, //curve20 b
0x1b, //curve20 a
0x33, //curve21 b
0x1a, //curve21 a
0x40, //curve22 b
0x18, //curve22 a
0x48, //curve23 b
0x17, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static char OUTDOOR_MDNIE_5[] = {
0xEC,
0x04, //cc r1 0.15
0x6c,
0x1f, //cc r2
0xa6,
0x1f, //cc r3
0xee,
0x1f, //cc g1
0xd2,
0x04, //cc g2
0x40,
0x1f, //cc g3
0xee,
0x1f, //cc b1
0xd2,
0x1f, //cc b2
0xa6,
0x04, //cc b3
0x88,
};

static char OUTDOOR_MDNIE_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x03, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x03, //sharpen cc gamma 00 0 0
//end
};

static char COLOR_ADJUSTMENT_MDNIE_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static char COLOR_ADJUSTMENT_MDNIE_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static char COLOR_ADJUSTMENT_MDNIE_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static char COLOR_ADJUSTMENT_MDNIE_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static char COLOR_ADJUSTMENT_MDNIE_5[] = {
0xEC,
0x04, //cc r1
0x00,
0x00, //cc r2
0x00,
0x00, //cc r3
0x00,
0x00, //cc g1
0x00,
0x04, //cc g2
0x00,
0x00, //cc g3
0x00,
0x00, //cc b1
0x00,
0x00, //cc b2
0x00,
0x04, //cc b3
0x00,
};

static char COLOR_ADJUSTMENT_MDNIE_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x00, //sharpen cc gamma 00 0 0
//end
};

static char NIGHT_MODE_1[] = {
//start
0xE8,
0x00, //roi0 x start
0x00,
0x00, //roi0 x end
0x00,
0x00, //roi0 y start
0x00,
0x00, //roi0 y end
0x00,
0x00, //roi1 x strat
0x00,
0x00, //roi1 x end
0x00,
0x00, //roi1 y start
0x00,
0x00, //roi1 y end
0x00,
};

static char NIGHT_MODE_2[] = {
0xE9,
0x00, //scr Cr Yb
0xff, //scr Rr Bb
0xff, //scr Cg Yg
0x00, //scr Rg Bg
0xff, //scr Cb Yr
0x00, //scr Rb Br
0xff, //scr Mr Mb
0x00, //scr Gr Gb
0x00, //scr Mg Mg
0xff, //scr Gg Gg
0xff, //scr Mb Mr
0x00, //scr Gb Gr
0xff, //scr Yr Cb
0x00, //scr Br Rb
0xff, //scr Yg Cg
0x00, //scr Bg Rg
0x00, //scr Yb Cr
0xff, //scr Bb Rr
0xff, //scr Wr Wb
0x00, //scr Kr Kb
0xff, //scr Wg Wg
0x00, //scr Kg Kg
0xff, //scr Wb Wr
0x00, //scr Kb Kr
};

static char NIGHT_MODE_3[] = {
0xEA,
0x00, //curve 1 b
0x20, //curve 1 a
0x00, //curve 2 b
0x20, //curve 2 a
0x00, //curve 3 b
0x20, //curve 3 a
0x00, //curve 4 b
0x20, //curve 4 a
0x00, //curve 5 b
0x20, //curve 5 a
0x00, //curve 6 b
0x20, //curve 6 a
0x00, //curve 7 b
0x20, //curve 7 a
0x00, //curve 8 b
0x20, //curve 8 a
0x00, //curve 9 b
0x20, //curve 9 a
0x00, //curve10 b
0x20, //curve10 a
0x00, //curve11 b
0x20, //curve11 a
0x00, //curve12 b
0x20, //curve12 a
};

static char NIGHT_MODE_4[] = {
0xEB,
0x00, //curve13 b
0x20, //curve13 a
0x00, //curve14 b
0x20, //curve14 a
0x00, //curve15 b
0x20, //curve15 a
0x00, //curve16 b
0x20, //curve16 a
0x00, //curve17 b
0x20, //curve17 a
0x00, //curve18 b
0x20, //curve18 a
0x00, //curve19 b
0x20, //curve19 a
0x00, //curve20 b
0x20, //curve20 a
0x00, //curve21 b
0x20, //curve21 a
0x00, //curve22 b
0x20, //curve22 a
0x00, //curve23 b
0x20, //curve23 a
0x00, //curve24 b
0xFF, //curve24 a
};

static char NIGHT_MODE_5[] = {
0xEC,
0x04, //cc r1
0x00,
0x00, //cc r2
0x00,
0x00, //cc r3
0x00,
0x00, //cc g1
0x00,
0x04, //cc g2
0x00,
0x00, //cc g3
0x00,
0x00, //cc b1
0x00,
0x00, //cc b2
0x00,
0x04, //cc b3
0x00,
};

static char NIGHT_MODE_6[] = {
0xE7,
0x08, //roi_ctrl rgb_if_type mdnie_en mask 00 00 0 000
0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
0x02, //HSIZE
0xD0,
0x05, //VSIZE
0x00,
0x00, //sharpen cc gamma 00 0 0
//end
};

#define MDNIE_SET(id)	\
{							\
	.name		= #id,				\
	.update_flag	= {0, 1, 2, 3, 4, 5, 6, 0},			\
	.seq		= {				\
		{	.cmd = LEVEL_UNLOCK,	.len = ARRAY_SIZE(LEVEL_UNLOCK),	.sleep = 0,},	\
		{	.cmd = id##_1,		.len = ARRAY_SIZE(id##_1),		.sleep = 0,},	\
		{	.cmd = id##_2,		.len = ARRAY_SIZE(id##_2),		.sleep = 0,},	\
		{	.cmd = id##_3,		.len = ARRAY_SIZE(id##_3),		.sleep = 0,},	\
		{	.cmd = id##_4,		.len = ARRAY_SIZE(id##_4),		.sleep = 0,},	\
		{	.cmd = id##_5,		.len = ARRAY_SIZE(id##_5),		.sleep = 0,},	\
		{	.cmd = id##_6,		.len = ARRAY_SIZE(id##_6),		.sleep = 0,},	\
		{	.cmd = LEVEL_LOCK,	.len = ARRAY_SIZE(LEVEL_LOCK),		.sleep = 0,},	\
	}	\
}

struct mdnie_table bypass_table[BYPASS_MAX] = {
	[BYPASS_ON] = MDNIE_SET(BYPASS)
};

struct mdnie_table accessibility_table[ACCESSIBILITY_MAX] = {
	[NEGATIVE] = MDNIE_SET(NEGATIVE),
	MDNIE_SET(COLOR_ADJUSTMENT_MDNIE),
	MDNIE_SET(UI),
	MDNIE_SET(GRAYSCALE),
	MDNIE_SET(GRAYSCALE_NEGATIVE)
};


struct mdnie_table hbm_table[HBM_MAX] = {
	[HBM_ON] =	MDNIE_SET(OUTDOOR_MDNIE)
};

static struct mdnie_table night_table[NIGHT_MODE_MAX] = {
	[NIGHT_MODE_ON] = MDNIE_SET(NIGHT_MODE)
};

struct mdnie_table main_table[SCENARIO_MAX][MODE_MAX] = {
	{
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(UI),
	}, {
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(VIDEO),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(VIDEO),
	},
	[CAMERA_MODE] = {
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(CAMERA),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(CAMERA),
	},
	[GALLERY_MODE] = {
		MDNIE_SET(GALLERY),
		MDNIE_SET(GALLERY),
		MDNIE_SET(GALLERY),
		MDNIE_SET(GALLERY),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(GALLERY),
	}, {
		MDNIE_SET(VT),
		MDNIE_SET(VT),
		MDNIE_SET(VT),
		MDNIE_SET(VT),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(VT),
	}, {
		MDNIE_SET(BROWSER),
		MDNIE_SET(BROWSER),
		MDNIE_SET(BROWSER),
		MDNIE_SET(BROWSER),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(BROWSER),
	}, {
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(EBOOK_UI),
	}, {
		MDNIE_SET(EMAIL),
		MDNIE_SET(EMAIL),
		MDNIE_SET(EMAIL),
		MDNIE_SET(EMAIL),
		MDNIE_SET(EBOOK_UI),
		MDNIE_SET(EMAIL),
	}
};
#undef MDNIE_SET

static struct mdnie_tune tune_info = {
	.bypass_table = bypass_table,
	.accessibility_table = accessibility_table,
	.hbm_table = hbm_table,
	.night_table = night_table,
	.main_table = main_table,

	.coordinate_table = coordinate_data,
	.scr_info = &scr_info,
	.night_mode_table = night_mode_data,
	.night_info = &night_info,
	.get_hbm_index = get_hbm_index,
	.color_offset = {color_offset_f1, color_offset_f2, color_offset_f3, color_offset_f4}
};

#endif