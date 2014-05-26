//!
//! @file 			Colours.cpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> ()
//! @created		2014/01/08
//! @last-modified 	2014/05/27
//! @brief			Defines many const and static colour objects.
//! @details
//!					See README.rst in repo root dir for more info.

// User headers
#include "../include/Config.hpp"
#include "../include/Colours.hpp"

namespace LoggerNs
{
	const Colour Colours::DEFAULT("default", config_TERM_TEXT_COLOUR_DEFAULT);
	const Colour Colours::WHITE("white", config_TERM_TEXT_COLOUR_WHITE);
	const Colour Colours::BLACK("black", config_TERM_TEXT_COLOUR_BLACK);
	const Colour Colours::LIGHT_GREY("light grey", config_TERM_TEXT_COLOUR_LIGHT_GREY);
	const Colour Colours::DARK_GREY("dark grey", config_TERM_TEXT_COLOUR_DARK_GREY);
	const Colour Colours::LIGHT_RED("light red", config_TERM_TEXT_COLOUR_LIGHT_RED);
	const Colour Colours::DARK_RED("dark red", config_TERM_TEXT_COLOUR_DARK_RED);
	const Colour Colours::LIGHT_GREEN("light green", config_TERM_TEXT_COLOUR_LIGHT_GREEN);
	const Colour Colours::DARK_GREEN("dark green", config_TERM_TEXT_COLOUR_DARK_GREEN);
	const Colour Colours::LIGHT_YELLOW("light yellow", config_TERM_TEXT_COLOUR_LIGHT_YELLOW);
	const Colour Colours::DARK_YELLOW("dark yellow", config_TERM_TEXT_COLOUR_DARK_YELLOW);
	const Colour Colours::LIGHT_BLUE("light blue", config_TERM_TEXT_COLOUR_LIGHT_BLUE);
	const Colour Colours::DARK_BLUE("dark blue", config_TERM_TEXT_COLOUR_DARK_BLUE);
	const Colour Colours::LIGHT_PURPLE("light purple", config_TERM_TEXT_COLOUR_LIGHT_PURPLE);
	const Colour Colours::DARK_PURPLE("dark purple", config_TERM_TEXT_COLOUR_DARK_PURPLE);
	const Colour Colours::LIGHT_CYAN("light cyan", config_TERM_TEXT_COLOUR_LIGHT_CYAN);
	const Colour Colours::DARK_CYAN("dark cyan", config_TERM_TEXT_COLOUR_DARK_CYAN);
}
