/*
  +-----------------------------------------------------------+
  | Copyright (c) 2017 Collet Valentin                        |
  +-----------------------------------------------------------+
  | This source file is subject to version the BDS license,   |
  | that is bundled with this package in the file LICENSE     |
  +-----------------------------------------------------------+
  | Author: Collet Valentin <valentin@famillecollet.com>      |
  +-----------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "pggi.h"

/*
#define REGISTER_CLASS_CONST_LONG(const_name, value) \
	    zend_declare_class_constant_long(class_entry, const_name, sizeof(const_name)-1, (zend_long)value);
*/

/*only work in MINIT_FUNCTION*/
#define REGISTER_CONST_LONG(const_name, value) \
		zend_register_long_constant(const_name, sizeof(const_name)-1, value, CONST_CS | CONST_PERSISTENT, module_number)
#define REGISTER_CONST_STRING(const_name, value) \
		zend_register_string_constant(const_name, sizeof(const_name)-1, value, 0, module_number)
static const zend_function_entry pggi_functions[] = {
	PHP_FE_END
};

PHP_MINIT_FUNCTION(pggi){
	
	REGISTER_CONST_LONG("PGGI_BASELINE_POSITION_TOP"		, GTK_BASELINE_POSITION_TOP		);
	REGISTER_CONST_LONG("PGGI_BASELINE_POSITION_CENTER"		, GTK_BASELINE_POSITION_CENTER	);
	REGISTER_CONST_LONG("PGGI_BASELINE_POSITION_BOTTOM"		, GTK_BASELINE_POSITION_BOTTOM	);

	REGISTER_CONST_LONG("PGGI_DELETE_CHARS"					, GTK_DELETE_CHARS				);
	REGISTER_CONST_LONG("PGGI_DELETE_WORD_ENDS"				, GTK_DELETE_WORD_ENDS			);
	REGISTER_CONST_LONG("PGGI_DELETE_WORDS"					, GTK_DELETE_WORDS				);
	REGISTER_CONST_LONG("PGGI_DELETE_DISPLAY_LINES"			, GTK_DELETE_DISPLAY_LINES		);
	REGISTER_CONST_LONG("PGGI_DELETE_DISPLAY_LINE_ENDS"		, GTK_DELETE_DISPLAY_LINE_ENDS	);
	REGISTER_CONST_LONG("PGGI_DELETE_PARAGRAPH_ENDS"		, GTK_DELETE_PARAGRAPH_ENDS		);
	REGISTER_CONST_LONG("PGGI_DELETE_PARAGRAPHS"			, GTK_DELETE_PARAGRAPHS			);
	REGISTER_CONST_LONG("PGGI_DELETE_WHITESPACE"			, GTK_DELETE_WHITESPACE			);

	REGISTER_CONST_LONG("PGGI_DIR_TAB_FORWARD"				, GTK_DIR_TAB_FORWARD			);
	REGISTER_CONST_LONG("PGGI_DIR_TAB_BACKWARD"				, GTK_DIR_TAB_BACKWARD			);
	REGISTER_CONST_LONG("PGGI_DIR_UP"						, GTK_DIR_UP					);
	REGISTER_CONST_LONG("PGGI_DIR_DOWN"						, GTK_DIR_DOWN					);
	REGISTER_CONST_LONG("PGGI_DIR_LEFT"						, GTK_DIR_LEFT					);
	REGISTER_CONST_LONG("PGGI_DIR_RIGHT"					, GTK_DIR_RIGHT					);

	REGISTER_CONST_LONG("PGGI_JUSTIFY_LEFT"					, GTK_JUSTIFY_LEFT				);
	REGISTER_CONST_LONG("PGGI_JUSTIFY_RIGHT"				, GTK_JUSTIFY_RIGHT				);
	REGISTER_CONST_LONG("PGGI_JUSTIFY_CENTER"				, GTK_JUSTIFY_CENTER			);
	REGISTER_CONST_LONG("PGGI_JUSTIFY_FILL"					, GTK_JUSTIFY_FILL				);

	REGISTER_CONST_LONG("PGGI_MOVEMENT_LOGICAL_POSITIONS"	, GTK_MOVEMENT_LOGICAL_POSITIONS);
	REGISTER_CONST_LONG("PGGI_MOVEMENT_VISUAL_POSITIONS"	, GTK_MOVEMENT_VISUAL_POSITIONS	);
	REGISTER_CONST_LONG("PGGI_MOVEMENT_WORDS"				, GTK_MOVEMENT_WORDS			);
	REGISTER_CONST_LONG("PGGI_MOVEMENT_DISPLAY_LINES"		, GTK_MOVEMENT_DISPLAY_LINES	);
	REGISTER_CONST_LONG("PGGI_MOVEMENT_DISPLAY_LINE_ENDS"	, GTK_MOVEMENT_DISPLAY_LINE_ENDS);
	REGISTER_CONST_LONG("PGGI_MOVEMENT_PARAGRAPHS"			, GTK_MOVEMENT_PARAGRAPHS		);
	REGISTER_CONST_LONG("PGGI_MOVEMENT_PARAGRAPH_ENDS"		, GTK_MOVEMENT_PARAGRAPH_ENDS	);
	REGISTER_CONST_LONG("PGGI_MOVEMENT_BUFFER_ENDS"			, GTK_MOVEMENT_BUFFER_ENDS		);
	REGISTER_CONST_LONG("PGGI_MOVEMENT_HORIZONTAL_PAGES"	, GTK_MOVEMENT_HORIZONTAL_PAGES	);

	REGISTER_CONST_LONG("PGGI_ORIENTATION_HORIZONTAL"		, GTK_ORIENTATION_HORIZONTAL	);
	REGISTER_CONST_LONG("PGGI_ORIENTATION_VERTICAL"			, GTK_ORIENTATION_VERTICAL		);

	REGISTER_CONST_LONG("PGGI_PACK_START"					, GTK_PACK_START				);
	REGISTER_CONST_LONG("PGGI_PACK_END"						, GTK_PACK_END					);

	REGISTER_CONST_LONG("PGGI_POS_LEFT"						, GTK_POS_LEFT					);
	REGISTER_CONST_LONG("PGGI_POS_RIGHT"					, GTK_POS_RIGHT					);
	REGISTER_CONST_LONG("PGGI_POS_TOP"						, GTK_POS_TOP					);
	REGISTER_CONST_LONG("PGGI_POS_BOTTOM"					, GTK_POS_BOTTOM				);

	REGISTER_CONST_LONG("PGGI_RELIEF_NORMAL"				, GTK_RELIEF_NORMAL				);
	REGISTER_CONST_LONG("PGGI_RELIEF_HALF"					, GTK_RELIEF_HALF				);
	REGISTER_CONST_LONG("PGGI_RELIEF_NONE"					, GTK_RELIEF_NONE				);

	REGISTER_CONST_LONG("PGGI_SCROLL_STEPS"					, GTK_SCROLL_STEPS				);
	REGISTER_CONST_LONG("PGGI_SCROLL_PAGES"					, GTK_SCROLL_PAGES				);
	REGISTER_CONST_LONG("PGGI_SCROLL_ENDS"					, GTK_SCROLL_ENDS				);
	REGISTER_CONST_LONG("PGGI_SCROLL_HORIZONTAL_STEPS"		, GTK_SCROLL_HORIZONTAL_STEPS	);
	REGISTER_CONST_LONG("PGGI_SCROLL_HORIZONTAL_PAGES"		, GTK_SCROLL_HORIZONTAL_PAGES	);
	REGISTER_CONST_LONG("PGGI_SCROLL_HORIZONTAL_ENDS"		, GTK_SCROLL_HORIZONTAL_ENDS	);

	REGISTER_CONST_LONG("PGGI_SCROLL_NONE"					, GTK_SCROLL_NONE				);
	REGISTER_CONST_LONG("PGGI_SCROLL_JUMP"					, GTK_SCROLL_JUMP				);
	REGISTER_CONST_LONG("PGGI_SCROLL_STEP_BACKWARD"			, GTK_SCROLL_STEP_BACKWARD		);
	REGISTER_CONST_LONG("PGGI_SCROLL_STEP_FORWARD"			, GTK_SCROLL_STEP_FORWARD		);
	REGISTER_CONST_LONG("PGGI_SCROLL_PAGE_BACKWARD"			, GTK_SCROLL_PAGE_BACKWARD		);
	REGISTER_CONST_LONG("PGGI_SCROLL_PAGE_FORWARD"			, GTK_SCROLL_PAGE_FORWARD		);
	REGISTER_CONST_LONG("PGGI_SCROLL_STEP_UP"				, GTK_SCROLL_STEP_UP			);
	REGISTER_CONST_LONG("PGGI_SCROLL_STEP_DOWN"				, GTK_SCROLL_STEP_DOWN			);
	REGISTER_CONST_LONG("PGGI_SCROLL_PAGE_UP"				, GTK_SCROLL_PAGE_UP			);
	REGISTER_CONST_LONG("PGGI_SCROLL_PAGE_DOWN"				, GTK_SCROLL_PAGE_DOWN			);
	REGISTER_CONST_LONG("PGGI_SCROLL_STEP_LEFT"				, GTK_SCROLL_STEP_LEFT			);
	REGISTER_CONST_LONG("PGGI_SCROLL_STEP_RIGHT"			, GTK_SCROLL_STEP_RIGHT			);
	REGISTER_CONST_LONG("PGGI_SCROLL_PAGE_LEFT"				, GTK_SCROLL_PAGE_LEFT			);
	REGISTER_CONST_LONG("PGGI_SCROLL_PAGE_RIGHT"			, GTK_SCROLL_PAGE_RIGHT			);
	REGISTER_CONST_LONG("PGGI_SCROLL_START"					, GTK_SCROLL_START				);
	REGISTER_CONST_LONG("PGGI_SCROLL_END"					, GTK_SCROLL_END				);

	REGISTER_CONST_LONG("PGGI_SELECTION_NONE"				, GTK_SELECTION_NONE			);
	REGISTER_CONST_LONG("PGGI_SELECTION_SINGLE"				, GTK_SELECTION_SINGLE			);
	REGISTER_CONST_LONG("PGGI_SELECTION_BROWSE"				, GTK_SELECTION_BROWSE			);
	REGISTER_CONST_LONG("PGGI_SELECTION_MULTIPLE"			, GTK_SELECTION_MULTIPLE		);

	REGISTER_CONST_LONG("PGGI_SHADOW_NONE"					, GTK_SHADOW_NONE				);
	REGISTER_CONST_LONG("PGGI_SHADOW_IN"					, GTK_SHADOW_IN					);
	REGISTER_CONST_LONG("PGGI_SHADOW_OUT"					, GTK_SHADOW_OUT				);
	REGISTER_CONST_LONG("PGGI_SHADOW_ETCHED_IN"				, GTK_SHADOW_ETCHED_IN			);
	REGISTER_CONST_LONG("PGGI_SHADOW_ETCHED_OUT"			, GTK_SHADOW_ETCHED_OUT			);

	REGISTER_CONST_LONG("PGGI_STATE_FLAG_NORMAL"			, GTK_STATE_FLAG_NORMAL			);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_ACTIVE"			, GTK_STATE_FLAG_ACTIVE			);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_PRELIGHT"			, GTK_STATE_FLAG_PRELIGHT		);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_SELECTED"			, GTK_STATE_FLAG_SELECTED		);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_INSENSITIVE"		, GTK_STATE_FLAG_INSENSITIVE	);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_FOCUSED"			, GTK_STATE_FLAG_FOCUSED		);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_BACKDROP"			, GTK_STATE_FLAG_BACKDROP		);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_DIR_LTR"			, GTK_STATE_FLAG_DIR_LTR		);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_DIR_RTL"			, GTK_STATE_FLAG_DIR_RTL		);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_LINK"				, GTK_STATE_FLAG_LINK			);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_VISITED"			, GTK_STATE_FLAG_VISITED		);
	REGISTER_CONST_LONG("PGGI_STATE_FLAG_CHECKED"			, GTK_STATE_FLAG_CHECKED		);
	/*REGISTER_CONST_LONG("PGGI_STATE_FLAG_DROP_ACTIVE"		, GTK_STATE_FLAG_DROP_ACTIVE	);*/
	
	REGISTER_CONST_LONG("PGGI_TOOLBAR_ICONS"				, GTK_TOOLBAR_ICONS				);
	REGISTER_CONST_LONG("PGGI_TOOLBAR_TEXT"					, GTK_TOOLBAR_TEXT				);
	REGISTER_CONST_LONG("PGGI_TOOLBAR_BOTH"					, GTK_TOOLBAR_BOTH				);
	REGISTER_CONST_LONG("PGGI_TOOLBAR_BOTH_HORIZ"			, GTK_TOOLBAR_BOTH_HORIZ		);

	REGISTER_CONST_LONG("PGGI_SORT_ASCENDING"				, GTK_SORT_ASCENDING			);
	REGISTER_CONST_LONG("PGGI_SORT_DESCENDING"				, GTK_SORT_DESCENDING			);

	
	REGISTER_CONST_LONG("PGGI_SIGNAL_GAPPLICATION_WINDOW_ADDED"		, gsignal_gapplication_window_added		);
	REGISTER_CONST_LONG("PGGI_SIGNAL_GAPPLICATION_WINDOW_REMOVED"	, gsignal_gapplication_window_removed	);
	REGISTER_CONST_LONG("PGGI_SIGNAL_GAPPLICATION_STARTUP"			, gsignal_gapplication_startup			);
	REGISTER_CONST_LONG("PGGI_SIGNAL_GAPPLICATION_SHUTDOWN"			, gsignal_gapplication_shutdown			);
	REGISTER_CONST_LONG("PGGI_SIGNAL_GAPPLICATION_ACTIVATE"			, gsignal_gapplication_activate			);

	REGISTER_CONST_LONG("PGGI_SIGNAL_GCONTAINER_ADD"				, gsignal_gcontainer_add				);

	REGISTER_CONST_LONG("PGGI_SIGNAL_GMENUITEM_ACTIVATE"			, gsignal_gmenuitem_activate			);
	
	REGISTER_CONST_LONG("PGGI_SIGNAL_GCOMBO_BOX_CHANGED"			, gsignal_gcombo_box_changed			);
	REGISTER_CONST_LONG("PGGI_SIGNAL_GCOMBO_BOX_MOVE_ACTIVE"		, gsignal_gcombo_box_move_active		);

	REGISTER_CONST_LONG("PGGI_SIGNAL_GTEXT_BUFFER_CHANGED"			, gsignal_gtext_buffer_changed			);	

	gexception_init		(module_number);

	gapplication_init	(module_number);
	gwidget_init		(module_number);

	gcontainer_init		(module_number);
	gwindow_init		(module_number);
	gbox_init			(module_number);
	//gbuttonbox_init		(module_number);

	gbutton_init		(module_number);

	glabel_init			(module_number);
	gimage_init			(module_number);

	gmenushell_init		(module_number);
	gmenubar_init		(module_number);
	gmenu_init			(module_number);
	gmenuitem_init		(module_number);

	gtext_view_init		(module_number);
	gtext_buffer_init	(module_number);

	gscroll_window_init	(module_number);

	gcombo_box_init		(module_number);
	gcombo_box_text_init(module_number);

	return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(pggi){
	return SUCCESS;
}

PHP_MINFO_FUNCTION(pggi){
	php_info_print_table_start();{
		php_info_print_table_row(2, "PGGI", "enabled");
	}
	php_info_print_table_end();
}

zend_module_entry pggi_module_entry = {
	STANDARD_MODULE_HEADER,
	"pggi",
	pggi_functions,
	PHP_MINIT(pggi),
	PHP_MSHUTDOWN(pggi),
	NULL,
	NULL,
	PHP_MINFO(pggi),
	PGGI_VERSION,
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_XMLWRITER
ZEND_GET_MODULE(pggi)
#endif

