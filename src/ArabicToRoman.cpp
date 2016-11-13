#include <sstream>
#include "ArabicToRoman.h"

using namespace numcon;

ArabicToRoman::ArabicToRoman()
{
    //ctor
}

ArabicToRoman::~ArabicToRoman()
{
    //dtor
}

std::string ArabicToRoman::convert(int input)
{
    std::stringstream ss;
    ss << input;
    std::string str = ss.str();
    return str;
}
