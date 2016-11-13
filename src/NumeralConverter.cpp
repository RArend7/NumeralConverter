#include "NumeralConverter.h"
using namespace numcon;

NumeralConverter::NumeralConverter()
{
    //ctor
}

NumeralConverter::~NumeralConverter()
{
    //dtor
}

std::string NumeralConverter::convert_numeral(std::string input)
{
    if (numeralValidator.is_roman_numeral(input))
    {
        return input;
    }
    else if (numeralValidator.is_arabic_numeral(input))
    {
        return input;
    }
    else
    {
        return "Input not recognized as valid, please try again.";
    }
}
