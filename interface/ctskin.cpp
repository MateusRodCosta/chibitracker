
#include "ctskin.h"
#include "base/style_box.h"

#define SET_STYLEBOX( m_which , m_style )\
set_stylebox_name(m_which,#m_which);\
set_stylebox(m_which,m_style);

#define SET_CONSTANT( m_which , m_constant )\
set_constant_name(m_which,#m_which);\
set_constant(m_which,m_constant);

#define SET_FONT( m_which , m_font )\
set_font_name(m_which,#m_which);\
set_font(m_which,m_font);

#define SET_BITMAP( m_which , m_bitmap )\
set_bitmap_name(m_which,#m_which);\
set_bitmap(m_which,m_bitmap);

#define SET_COLOR( m_which , m_color )\
set_color_name(m_which,#m_which);\
set_color(m_which,m_color);


void CTSkin::set_default_extra() {

	/* PAttern Editor */
	
	StyleBox sbaux=StyleBox(1,Color(0),Color(255,50,50),Color(255,50,50),false);
	sbaux.draw_center=false;
	
	SET_STYLEBOX(SB_PATTERN_EDITOR_CURSOR,sbaux);

	
	SET_COLOR(COLOR_PATTERN_EDITOR_ROW_HL_SELECTED,Color(0));
	SET_COLOR(COLOR_PATTERN_EDITOR_BG_SELECTED,Color( 70,100,255 ));
	SET_COLOR(COLOR_PATTERN_EDITOR_FONT_SELECTED,Color(240));
	SET_COLOR(COLOR_PATTERN_EDITOR_ROW_HL_MAJOR,Color(170));
	SET_COLOR(COLOR_PATTERN_EDITOR_ROW_HL_MINOR,Color(220));
	SET_COLOR(COLOR_PATTERN_EDITOR_BG,Color(255));
	SET_COLOR(COLOR_PATTERN_EDITOR_FONT,Color(90));
	SET_COLOR(COLOR_PATTERN_EDITOR_FONT_MUTE,Color(210,190,190) );
	SET_COLOR(COLOR_PATTERN_EDITOR_FONT_CLONED,Color(200));
	SET_COLOR(COLOR_PATTERN_EDITOR_SEPARATOR,Color(240));
	SET_COLOR(COLOR_PATTERN_EDITOR_FONT_SOLID,Color(0));

	SET_CONSTANT(C_PATTERN_EDITOR_COLUMN_SEPARATION,5);
	SET_CONSTANT(C_PATTERN_EDITOR_ROW_SEPARATION,1);
	
	SET_COLOR(COLOR_PATTERN_EDITOR_TOP,Color(0));
	SET_COLOR(COLOR_PATTERN_EDITOR_TOP_SELECTED,Color(255,50,50));
	SET_COLOR(COLOR_PATTERN_EDITOR_TOP_MUTE,Color(100));
	SET_COLOR(COLOR_PATTERN_EDITOR_ROWS,Color(0));
	SET_COLOR(COLOR_PATTERN_EDITOR_ROWS_CURRENT,Color(255,50,50));
	SET_COLOR(COLOR_PATTERN_EDITOR_FOCUS,Color(255,50,50));
	
	SET_FONT(FONT_PATTERN_EDITOR,0);
	SET_FONT(FONT_PATTERN_EDITOR_TOP,0);
	SET_FONT(FONT_PATTERN_EDITOR_ROWS,0);


	set_bitmap(BITMAP_PATTERN_EDITOR_TRACK_POPUP,-1);
	set_bitmap(BITMAP_PATTERN_EDITOR_TRACK_POPUP_PRESSED,-1);
	
	SET_CONSTANT(C_PATTERN_EDITOR_OSCS_HEIGHT,16);
	/* Orderlist */
	
	SET_FONT(FONT_ORDERLIST,0);
	SET_CONSTANT(C_ORDERLIST_ROW_SEPARATION,2);
	SET_COLOR(COLOR_ORDERLIST_BG,Color(255));
	SET_COLOR(COLOR_ORDERLIST_PLAYED_ORDER,Color(255,60,60));
	SET_COLOR(COLOR_ORDERLIST_ORDER,Color(0));
	SET_COLOR(COLOR_ORDERLIST_FOCUS_FRAME,Color( 255,50,50 ));
	SET_COLOR(COLOR_ORDERLIST_PATTERN,Color(90));
	sbaux=StyleBox(1,Color(0),Color(255,50,50),Color(255,50,50),false);
	sbaux.draw_center=false;	
	SET_STYLEBOX(SB_ORDERLIST_CURSOR,sbaux);
	
	/* Sample Editor */
	

	SET_COLOR(COLOR_SAMPLE_EDITOR_BG,Color(240,240,240 ));
	SET_COLOR(COLOR_SAMPLE_EDITOR_BG_SEL, Color( 70,100,255 ) );
	SET_COLOR(COLOR_SAMPLE_EDITOR_FG,Color(90));
	SET_COLOR(COLOR_SAMPLE_EDITOR_FG_SEL,Color(255));
	SET_COLOR(COLOR_SAMPLE_EDITOR_LOOP_BG,Color(0));
	SET_COLOR(COLOR_SAMPLE_EDITOR_LOOP_BG_SEL,Color( 255,80,80) );
	SET_COLOR(COLOR_SAMPLE_EDITOR_LOOP_FG,Color( 255,80,80));
	SET_COLOR(COLOR_SAMPLE_EDITOR_LOOP_FG_SEL,Color(0));
	SET_COLOR(COLOR_SAMPLE_EDITOR_CENTER,Color( 255,80,80));
	SET_COLOR(COLOR_SAMPLE_EDITOR_CENTER_SEL,Color( 255,80,80));
	SET_COLOR(COLOR_SAMPLE_EDITOR_NOSAMPLE,Color(240));

	StyleBox msf;
	for (int i=0;i<4;i++)
		msf.margins[i]=5;
	SET_STYLEBOX( SB_MAIN_STACK_FRAME, msf );
	SET_STYLEBOX( SB_TOP_STACK_FRAME, msf );
	
	SET_CONSTANT(C_SAMPLE_POSITON_ARROW_SIZE,7);
	/* Sample Table */
	
	SET_FONT(FONT_SAMPLETABLE,0);
	SET_COLOR(COLOR_SAMPLETABLE_BG,Color(240,240,240 ));
	SET_COLOR(COLOR_SAMPLETABLE_SOLID,Color(0));
	SET_COLOR(COLOR_SAMPLETABLE_FG,Color(90));
	SET_COLOR(COLOR_SAMPLETABLE_FOCUS,Color( 255,80,80));
	SET_COLOR(COLOR_SAMPLETABLE_CURSOR,Color( 255,80,80));
	SET_CONSTANT(C_SAMPLETABLE_ROW_SEPARATION,2);
	
	/* Envelope */
	SET_FONT(FONT_ENVELOPE,0);
	SET_COLOR(COLOR_ENVELOPE_LOOP,Color( 255,80,80));
	SET_COLOR(COLOR_ENVELOPE_SUSTAIN_LOOP,Color( 190,60,60));
	SET_COLOR(COLOR_ENVELOPE_BG,Color(240));
	SET_COLOR(COLOR_ENVELOPE_POINT,Color( 255,80,80));
	SET_COLOR(COLOR_ENVELOPE_FONT,Color(0));
	SET_COLOR(COLOR_ENVELOPE_SCALE,Color(0));
	SET_COLOR(COLOR_ENVELOPE_LINE,Color(90));
	
	/* PlayBack Button */

	SET_STYLEBOX( SB_PLAYBACK_BUTTON_NORMAL, StyleBox( 2, Color( 150,150,150 ), Color( 250,250,250 ), Color( 50,50,50 ) ) );

	SET_STYLEBOX( SB_PLAYBACK_BUTTON_PRESSED, StyleBox( 2, Color( 110,110,110 ), Color( 50,50,50 ), Color( 200,200,200 ) ) );
	SET_STYLEBOX( SB_PLAYBACK_BUTTON_HOVER, StyleBox( 2, Color( 190,190,190 ), Color( 250,250,250 ), Color( 50,50,50 ) ) );
	SET_STYLEBOX( SB_PLAYBACK_BUTTON_FOCUS, StyleBox( 1, Color( 0,0,0 ), Color( 255,50,50 ), Color( 255,50,50 ) ) );

	for (int i=0;i<4;i++) {

		StyleBox sb=get_stylebox( SB_PLAYBACK_BUTTON_NORMAL );
		sb.margins[i]=6;
		SET_STYLEBOX( SB_PLAYBACK_BUTTON_NORMAL, sb );

	}
	SET_CONSTANT( C_PLAYBACK_BUTTON_DISPLACEMENT, 0 );
	
	SET_CONSTANT( C_PLAYBACK_BUTTON_ARROW_SIZE, 12);

	SET_COLOR( COLOR_PLAYBACK_BUTTON_ARROW_COLOR, Color(0,0,0) );
	/* VU */
	
	SET_COLOR(COLOR_VU_BG,0);
	SET_COLOR(COLOR_VU_MIN,Color(50,255,20));
	SET_COLOR(COLOR_VU_MAX,Color(255,50,20));
	
	/* Sample Positions */
	
	SET_COLOR(COLOR_SAMPLE_POS_MINVOL,Color(150));
	SET_COLOR(COLOR_SAMPLE_POS_MAXVOL,Color(0));


}


CTSkin::CTSkin() : Skin(CT_SB_MAX,CT_C_MAX,CT_BITMAP_MAX,CT_FONT_MAX,CT_COLOR_MAX) {


	set_default_extra();

}

CTSkin::~CTSkin() {


}
