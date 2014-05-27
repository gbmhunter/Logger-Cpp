//!
//! @file 			Colours.hpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> ()
//! @created		2014/01/08
//! @last-modified 	2014/05/27
//! @brief			Defines many const and static colour objects.
//! @details
//!					See README.rst in repo root dir for more info.

// Header guard
#ifndef LOGGER_CPP_COLOURS_H
#define LOGGER_CPP_COLOURS_H

#include "Config.hpp"
#include "Colour.hpp"

namespace LoggerNs
{

	class Colours
	{

	public:
/*
		static const Colour DEFAULT;
		static const Colour WHITE;
		static const Colour BLACK;
		static const Colour LIGHT_GREY;
		static const Colour DARK_GREY;
		static const Colour LIGHT_RED;
		static const Colour DARK_RED;
		static const Colour LIGHT_GREEN;
		static const Colour DARK_GREEN;
		static const Colour LIGHT_YELLOW;
		static const Colour DARK_YELLOW;
		static const Colour LIGHT_BLUE;
		static const Colour DARK_BLUE;
		static const Colour LIGHT_PURPLE;
		static const Colour DARK_PURPLE;
		static const Colour LIGHT_CYAN;
		static const Colour DARK_CYAN;
*/


		static Colour& DEFAULT();
		static Colour& WHITE();
		static Colour& BLACK();
		static Colour& LIGHT_GREY();
		static Colour& DARK_GREY();
		static Colour& LIGHT_RED();
		static Colour& DARK_RED();
		static Colour& LIGHT_GREEN();
		static Colour& DARK_GREEN();
		static Colour& LIGHT_YELLOW();
		static Colour& DARK_YELLOW();
		static Colour& LIGHT_BLUE();
		static Colour& DARK_BLUE();
		static Colour& LIGHT_PURPLE();
		static Colour& DARK_PURPLE();
		static Colour& LIGHT_CYAN();
		static Colour& DARK_CYAN();

	private:

		// none

	};


}

#endif // #ifndef LOGGER_CPP_COLOURS_H

// EOF
