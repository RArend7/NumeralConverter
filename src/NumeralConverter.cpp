#include "NumeralConverter.h"
#include "stdlib.h"
#include <sstream>
using namespace numcon;

NumeralConverter::NumeralConverter()
{
    //ctor
    numeralValidator = NumeralValidator();
    toRomanConverter = ArabicToRoman();
    toArabicConverter = RomanToArabic();
}

NumeralConverter::~NumeralConverter()
{
    //dtor
}

std::string NumeralConverter::convert_numeral(std::string input)
{
    if (numeralValidator.is_roman_numeral(input))
    {
        int int_output = toArabicConverter.convert(input);
        std::stringstream ss;
        ss << int_output;
        std::string str_output = ss.str();
        return str_output;
    }
    else if (numeralValidator.is_arabic_numeral(input))
    {
        int input_as_int = atoi(input.c_str());

        if (input_as_int > 3999)
        {
            return "Roman numerals can realistically go as high as 3999. Try using a smaller number.";
        }
        else
        {
            std::string converted_string = toRomanConverter.convert(input_as_int);
            if (numeralValidator.is_roman_numeral(converted_string))
            {
                return converted_string;
            }
            else
            {
                // this shouldn't happen, but I'd like the program to tell me if it does
                return converted_string += " (This was flagged as an invalid Roman numeral. Oops.)";
            }
        }

    }
    else
    {
        return "Input not recognized as valid, please try again.";
    }
}
