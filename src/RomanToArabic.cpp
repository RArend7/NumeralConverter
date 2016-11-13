#include "RomanToArabic.h"

using namespace numcon;

RomanToArabic::RomanToArabic()
{
    //ctor
}

RomanToArabic::~RomanToArabic()
{
    //dtor
}

int RomanToArabic::convert(const std::string& input)
{
    int output = 0;

    for (unsigned int index=0; index<input.length(); index++)
    {
        if (input[index] == 'M')
        {
            output += 1000;
        }
        else if ((input[index] == 'D'))
        {
            output += 500;
        }
        else if ((input[index] == 'C'))
        {
            if (input[index+1] == 'M')
            {
                output += 900;
                index++;
            }
            else if (input[index+1] == 'D')
            {
                output += 400;
                index++;
            }
            else
            {
                output += 100;
            }
        }
        else if ((input[index] == 'L'))
        {
            output += 50;
        }
        else if ((input[index] == 'X'))
        {
            if (input[index+1] == 'C')
            {
                output += 90;
                index++;
            }
            else if (input[index+1] == 'L')
            {
                output += 40;
                index++;
            }
            else
            {
                output += 10;
            }
        }
        else if ((input[index] == 'V'))
        {
            output += 5;
        }
        else if ((input[index] == 'I'))
        {
            if (input[index+1] == 'X')
            {
                output += 9;
                index++;
            }
            else if (input[index+1] == 'V')
            {
                output += 4;
                index++;
            }
            else
            {
                output += 1;
            }
        }
    }

    return output;
}
