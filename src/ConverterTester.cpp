#include <cassert>
#include <iostream>
#include "ConverterTester.h"

using namespace numcon;

ConverterTester::ConverterTester()
{
    //ctor
    numeralConverter = NumeralConverter();
}

ConverterTester::~ConverterTester()
{
    //dtor
}

void ConverterTester::run_tests()
{
    std::cout << "Verifying unit tests..." << std::endl;
    check_input();
    std::cout << "Unit testing completed, proceeding with program as normal.\n\n" << std::endl;
}

void ConverterTester::check_input()
{
    input = "1234";
    output = numeralConverter.convert_numeral(input);
    assert(output != "Input not recognized as valid, please try again.");
    std::cout << input << " is valid input..." << std::endl;

    input = "XIV";
    output = numeralConverter.convert_numeral(input);
    assert(output != "Input not recognized as valid, please try again.");
    std::cout << input << " is valid input..." << std::endl;

    input = "foobar";
    output = numeralConverter.convert_numeral(input);
    assert(output == "Input not recognized as valid, please try again.");
    std::cout << input << " is not valid input..." << std::endl;

    input = "XXXM";
    output = numeralConverter.convert_numeral(input);
    assert(output == "Input not recognized as valid, please try again.");
    std::cout << input << " is not valid input..." << std::endl;
}
