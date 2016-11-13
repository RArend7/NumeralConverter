#include "NumeralConverter.h"
#include "stdlib.h"
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
        int input_as_int = atoi(input.c_str());

        if (input_as_int > 3999)
            return "Roman numerals can realistically go as high as 3999. Try using a smaller number.";
        else
            return toRomanConverter.convert(input_as_int);
    }
    else
    {
        return "Input not recognized as valid, please try again.";
    }
}
