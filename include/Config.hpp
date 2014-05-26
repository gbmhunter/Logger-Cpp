//!
//! @file 			Config.hpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.cladlab.com)
//! @edited 		n/a
//! @created		2014/05/01
//! @last-modified 	2014/05/27
//! @brief 			Configuration file for the logger-cpp library.
//! @details
//!					See README.rst in repo root dir for more info.

//===============================================================================================//
//====================================== HEADER GUARD ===========================================//
//===============================================================================================//

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

#ifndef LOGGER_CPP_CONFIG_H
#define LOGGER_CPP_CONFIG_H

//! @brief		The terminal escape code.
#define config_TERM_ESCAPE_CODE				"\x1B["

#define config_TERM_TEXT_FORMAT_NORMAL 			config_TERM_ESCAPE_CODE "0m"	//!< Returns text to normal formatting. Widely supported.

#define config_TERM_TEXT_COLOUR_BLACK			config_TERM_ESCAPE_CODE "30m"	//!< Black text. Widely supported.
#define config_TERM_TEXT_COLOUR_LIGHT_RED 		config_TERM_ESCAPE_CODE "91m"	//!< Red text. Widely supported.
#define config_TERM_TEXT_COLOUR_LIGHT_GREEN 	config_TERM_ESCAPE_CODE "92m"	//!< Green text. Widely supported.
#define config_TERM_TEXT_COLOUR_LIGHT_YELLOW 	config_TERM_ESCAPE_CODE "93m"	//!< Yellow text. Widely supported.
#define config_TERM_TEXT_COLOUR_LIGHT_BLUE 		config_TERM_ESCAPE_CODE "94m"	//!< Blue text. Widely supported.
#define config_TERM_TEXT_COLOUR_LIGHT_PURPLE	config_TERM_ESCAPE_CODE "95m"	//!< Purple text. Widely supported.
#define config_TERM_TEXT_COLOUR_LIGHT_CYAN 		config_TERM_ESCAPE_CODE "96m"	//!< Cyan text. Widely supported.
#define config_TERM_TEXT_COLOUR_LIGHT_GREY		config_TERM_ESCAPE_CODE "37m"	//!< Light grey text. Widely supported.
#define config_TERM_TEXT_COLOUR_DEFAULT			config_TERM_ESCAPE_CODE "39m"	//!< default coloured text. Widely supported.

#define config_TERM_TEXT_COLOUR_DARK_GREY		config_TERM_ESCAPE_CODE "90m"	//!< Grey text. Widely supported.
#define config_TERM_TEXT_COLOUR_DARK_RED		config_TERM_ESCAPE_CODE "31m"	//!< Light red (bold) text. Widely supported.
#define config_TERM_TEXT_COLOUR_DARK_GREEN 		config_TERM_ESCAPE_CODE "32m"	//!< Light green (bold) text. Widely supported.
#define config_TERM_TEXT_COLOUR_DARK_YELLOW 	config_TERM_ESCAPE_CODE "33m"	//!< Light yellow (bold) text. Widely supported.
#define config_TERM_TEXT_COLOUR_DARK_BLUE 		config_TERM_ESCAPE_CODE "34m"	//!< Light blue (bold) text. Widely supported.
#define config_TERM_TEXT_COLOUR_DARK_PURPLE		config_TERM_ESCAPE_CODE "35m"	//!< Light purple (bold) text. Widely supported.
#define config_TERM_TEXT_COLOUR_DARK_CYAN 		config_TERM_ESCAPE_CODE "36m"	//!< Light cyan (bold) text. Widely supported.
#define config_TERM_TEXT_COLOUR_WHITE 			config_TERM_ESCAPE_CODE "97m"	//!< White text. Widely supported.

#define config_ADVANCED_TEXT_FORMATTING 			1
#define config_DEBUG_TEXT_COLOUR 					config_TERM_COLOUR_GREEN
#define config_ERROR_TEXT_COLOUR 					config_TERM_COLOUR_RED


#endif // #ifndef LOGGER_CPP_CONFIG_H

// EOF
