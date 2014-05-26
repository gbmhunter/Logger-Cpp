//!
//! @file 			Ss.hpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> ()
//! @created		2014/01/08
//! @last-modified 	2014/05/22
//! @brief			The Sp (smart print) class adds colouring with easy-to-use ostream "<<" message printing functionality.
//! @details
//!					See README.rst in repo root dir for more info.

// Header guard
#ifndef LOGGER_NS_SS_H
#define LOGGER_NS_SS_H

#include <sstream>

#include "Colour.hpp"

namespace LoggerNs
{
	//! @brief		Helper class that makes it easy for the user to write code for printing messages.
	//! @details	Allows the user to write Ss() << "My message.".
	class Ss
	{

	public:

		operator std::stringstream& ()
		{
			return ss;
		}

		template <class T>
			Ss& operator << (const T& v)
		{
			ss << v; return *this;
		}

		template <class T>
			Ss& operator << (const T* v)
		{
			ss << v; return *this;
		}

		Ss& operator << (std::ostream& (*v)(std::ostream&))
		{
			ss << v; return *this;
		}


	private:

		//==================================== PRIVATE VARIABLES ================================//

		std::stringstream ss;


		//====================================== PRIVATE METHODS ================================//


	};

} // namespace LoggerNs

#endif // #ifndef LOGGER_NS_SS_H
