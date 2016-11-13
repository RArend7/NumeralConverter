#include "NumeralValidator.h"

#include <regex>

using namespace numcon;

NumeralValidator::NumeralValidator()
{
    //ctor
}

NumeralValidator::~NumeralValidator()
{
    //dtor
}

bool NumeralValidator::is_roman_numeral(const std::string& input)
{
    std::regex roman_regex("^M{0,4}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$");
    return std::regex_match(input, roman_regex);
}

bool NumeralValidator::is_arabic_numeral(const std::string& input)
{
    std::regex arabic_regex("^[[:digit:]]+$");
    return std::regex_match(input, arabic_regex);
}
