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
    check_roman_conversion();
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

void ConverterTester::check_roman_conversion()
{
    input = "1";
    output = numeralConverter.convert_numeral(input);
    assert(output == "I");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "2";
    output = numeralConverter.convert_numeral(input);
    assert(output == "II");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "3";
    output = numeralConverter.convert_numeral(input);
    assert(output == "III");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "4";
    output = numeralConverter.convert_numeral(input);
    assert(output == "IV");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "5";
    output = numeralConverter.convert_numeral(input);
    assert(output == "V");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "6";
    output = numeralConverter.convert_numeral(input);
    assert(output == "VI");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "7";
    output = numeralConverter.convert_numeral(input);
    assert(output == "VII");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "8";
    output = numeralConverter.convert_numeral(input);
    assert(output == "VIII");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "9";
    output = numeralConverter.convert_numeral(input);
    assert(output == "IX");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "10";
    output = numeralConverter.convert_numeral(input);
    assert(output == "X");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "49";
    output = numeralConverter.convert_numeral(input);
    assert(output == "XLIX");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "50";
    output = numeralConverter.convert_numeral(input);
    assert(output == "L");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "94";
    output = numeralConverter.convert_numeral(input);
    assert(output == "XCIV");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "99";
    output = numeralConverter.convert_numeral(input);
    assert(output == "XCIX");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "100";
    output = numeralConverter.convert_numeral(input);
    assert(output == "C");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "500";
    output = numeralConverter.convert_numeral(input);
    assert(output == "D");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "1000";
    output = numeralConverter.convert_numeral(input);
    assert(output == "M");
    std::cout << input << " successfully converted to " << output << std::endl;

    input = "3999";
    output = numeralConverter.convert_numeral(input);
    assert(output == "MMMCMXCIX");
    std::cout << input << " successfully converted to " << output << std::endl;
}
