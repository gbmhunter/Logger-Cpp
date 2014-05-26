//!
//! @file 			Logger.hpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.cladlab.com)
//! @created		2014/04/07
//! @last-modified 	2014/05/27
//! @brief 			Contains logging functionality for debug and error messages.
//! @details
//!					See README.rst in root dir for more info.

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

//===============================================================================================//
//======================================== HEADER GUARD =========================================//
//===============================================================================================//

#ifndef LOGGER_NS_LOGGER_H
#define LOGGER_NS_LOGGER_H

#include <sstream>
#include <iostream>


#include "Config.hpp"
#include "Colours.hpp"

//===============================================================================================//
//======================================== NAMESPACE ============================================//
//===============================================================================================//

namespace LoggerNs
{

	class Logger
	{


	public:

		//! @brief		Pointer to an ostream buffer that serves as an output for logging messages.
		//! @details	Defaults to NULL.
		std::ostream* buff;

		Colour startColour;
		Colour stopColour;

		//! @brief		Base constructor.
		//! @sa			Logger().
		Logger(std::ostream& output , Colour startColour, Colour stopColour) :
			buff(&output),
			startColour(startColour),
			stopColour(stopColour),
			isOutputEnabled(true),
			prefix(""),
			suffix("")
		{

		}

		//! @brief		Simplified constructor.
		Logger() :
			buff(nullptr),
			startColour(),
			stopColour(),
			isOutputEnabled(true),
			prefix(""),
			suffix("")
		{

		}

		~Logger()
		{
			//if(buff != NULL)
				// Add an newline before object is destroyed
				//*buff << std::endl;
		}

		template<typename T>
		Logger &operator << (const T &t)
		{
			//std::cout << "SHOULD PRINT RED!" << std::endl;
			//std::cout << "this->buff = " << this->buff << std::endl;
			//std::cout << "this->colour.ansiCode = " << this->colour.ansiCode << std::endl;
			if((this->buff != NULL)  && (isOutputEnabled == true))
			{
				//std::cout << "BUFF NOT NULL!" << std::endl;
				// Colour this text
				*buff << this->startColour.ansiCode;
				*buff << t;
				*buff << this->stopColour.ansiCode;
			}
			return *this;
		}

		//! @brief		Special case overload so we can use std::endl.
		Logger& operator<<(std::ostream& (*f)(std::ostream&))
		{
			if((buff != NULL) && (isOutputEnabled == true))
				*buff << f;
			return *this;
		}

		void Print(std::stringstream& ss)
		{
			if((buff != NULL)  && (isOutputEnabled == true))
			{
				*buff << this->startColour.ansiCode;
				*buff << this->prefix;
				*buff << ss.str();
				*buff << this->suffix;
				*buff << this->stopColour.ansiCode;

			}
		}

		void PrintRaw(std::stringstream& ss)
		{
			if((buff != NULL) && (isOutputEnabled == true))
			{
				*buff << ss.str();
			}
		}

		void PrintNoFix(std::stringstream& ss)
		{
			if((buff != NULL) && (isOutputEnabled == true))
			{
				*buff << this->startColour.ansiCode;
				*buff << ss.str();
				*buff << this->stopColour.ansiCode;
			}
		}

		void PrintEmptyLine()
		{
			if((buff != NULL) && (isOutputEnabled == true))
			{
				*buff << "\r\n";
			}
		}

		void AddPrefix(std::string prefix)
		{
			this->prefix = prefix;
		}

		void AddSuffix(std::string suffix)
		{
			this->suffix = suffix;
		}

		void OutputEnabled(bool isOutputEnabled)
		{
			this->isOutputEnabled = isOutputEnabled;
		}

	private:

		//! @brief		Determines if output is printed or not.
		bool isOutputEnabled;

		//! @brief		Characters to add to the start of every message sent with << or Print().
		std::string prefix;

		//! @brief		Characters to add to the end of every message sent with << or Print().
		std::string suffix;

	};

} // namespace LoggerNs

#endif	// #ifndef CSV_CPP_LOGGER_H

// EOF
