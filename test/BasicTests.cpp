//!
//! @file 			BasicTests.cpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.cladlab.com)
//! @created		2014/05/22
//! @last-modified 	2014/05/27
//! @brief
//! @details
//!					See README.rst in root dir for more info.

#include <iostream>
#include <fstream>
#include <cstdint>

#include "../api/LoggerApi.hpp"

#include "../lib/UnitTest++/src/UnitTest++.h"

using namespace LoggerNs;

namespace LoggerTests
{
	SUITE(BasicTests)
	{

		TEST(BasicTest)
		{

			LoggerNs::Logger stdOut(std::cout, LoggerNs::Colours::LIGHT_RED, LoggerNs::Colours::DEFAULT);

			stdOut.AddPrefix("Prefix: ");
			stdOut.AddSuffix(" :Suffix\r\n");

			stdOut.Print(Ss() << "Testing");
			// Empty file, there should be no record
			//CHECK_EQUAL(0, csvTable.NumRecords());

		}

	} // SUITE(BasicTests)
} // namespace LoggerTests
