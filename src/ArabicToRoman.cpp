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
    std::string output_string = "";

    while (input > 0)
    {
        if (input >= 1000)
        {
            input -= 1000;
            output_string += "M";
        }

        else if (input >= 500)
        {
            if (input >= 900)
            {
                input -= 900;
                output_string += "CM";
            }
            else
            {
                input -= 500;
                output_string += "D";
            }
        }

        else if (input >= 100)
        {
            if (input >= 400)
            {
                input -= 400;
                output_string += "CD";
            }
            else
            {
                input -= 100;
                output_string += "C";
            }
        }

        else if (input >= 50)
        {
            if (input >= 90)
            {
                input -= 90;
                output_string += "XC";
            }
            else
            {
                input -= 50;
                output_string += "L";
            }
        }

        else if (input >= 10)
        {
            if (input >= 40)
            {
                input -= 40;
                output_string += "XL";
            }
            else
            {
                input -= 10;
                output_string += "X";
            }
        }

        else if (input >= 5)
        {
            if (input == 9)
            {
                input -= 9;
                output_string += "IX";
            }
            else
            {
                input -= 5;
                output_string += "V";
            }
        }

        else if (input >= 1)
        {
            if (input == 4)
            {
                input -= 4;
                output_string += "IV";
            }
            else
            {
                input -= 1;
                output_string += "I";
            }
        }
    }

    return output_string;
}
