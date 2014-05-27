==============================================================
logger-cpp
==============================================================

------------------------------------------------------------------------
A C++ library for adding easy and powerful message logging capabilities.
------------------------------------------------------------------------

.. image:: https://travis-ci.org/gbmhunter/logger-cpp.svg?branch=master   
	:target: https://travis-ci.org/gbmhunter/logger-cpp

- Author: gbmhunter <gbmhunter@gmail.com> (http://www.cladlab.com)
- Created: 2014/05/27
- Last Modified: 2014/05/27
- Version: v1.1.0.0
- Company: CladLabs
- Project: Free Code Libraries
- Language: C++
- Compiler: GCC	
- uC Model: n/a
- Computer Architecture: n/a
- Operating System: n/a
- Documentation Format: Doxygen
- License: GPLv3

.. role:: bash(code)
	:language: bash

Description
===========



Portable (Platform Agnostic)
----------------------------

logger-cpp can be used with ease on both Linux and embedded systems (as long as they are powerful enough to support strings and streams).

All platform-specific operations such as debug and error message printing are handled by providing you with pointer variables to assign to objects at run time.


Easy Including
--------------

All you need to do is include the single header file called :code:`LoggerApi.hpp` which is found in the :code:`api/` directory, and provide the compiler with all the files in the :code:`src/` directory.

Easy To Experiment With
-----------------------

A Makefle is included with automatic dependcy tracking and example code which is automatically built on running the command :code:`make` from the root directory of the repo.

Once compiled, this example code can be run by typing :code:`example/Example.elf`.


Included Unit Tests
-------------------

logger-cpp uses the UnitTest++ library to perform unit testing. They are located under :code:`test/`. The UnitTest++ library is included with this repo.

The unit tests check for:

- Basic funcitonality
- Correct colours are outputted


Installation
============

1. Clone the git repo onto your local storage.

2. Run :code:`make all` to compile and run unit tests. Do not worry about error messages being printed when unit tests are run, the unit tests are designed to specifically cause errors to test the response.

3. To include logger-cpp into your embedded (or otherwise) firmware/software project, copy the repo into your project folder (or other suitable place) and include the file :code:`/api/LoggerApi.hpp` from your C++ code.


Dependencies
============

The following table lists all of csv-cpp's dependencies.

====================== ==================== ======================================================================
Dependency             Delivery             Usage
====================== ==================== ======================================================================
<iostream>             Standard C++ library std::cin, std::cout
====================== ==================== ======================================================================


Issues
======

See GitHub Issues.

Examples
========

Nothing here yet...

FAQ
===

Nothing yet...

Changelog
=========

========= ========== ===================================================================================================
Version    Date       Comment
========= ========== ===================================================================================================
v1.1.0.0  2014/05/27 Modified all Colour constants so get around the 'static initilisation fiasco', by using the 'construct on first use' idiom.
v1.0.0.0  2014/05/27 Initial commit. Logger library works fine for outputting messages using either the '<<' operator or one of the 'Logger::Print()' functions. A basic output test and colour tests are included.
========= ========== ===================================================================================================