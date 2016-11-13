#ifndef NUMERALCONVERTER_H
#define NUMERALCONVERTER_H

#include <string>
#include "NumeralValidator.h"
#include "ArabicToRoman.h"
#include "RomanToArabic.h"

namespace numcon
{
    class NumeralConverter
    {
        public:
            NumeralConverter();
            virtual ~NumeralConverter();
            std::string convert_numeral(std::string input);

        protected:

        private:
            NumeralValidator numeralValidator;
            ArabicToRoman toRomanConverter;
            RomanToArabic toArabicConverter;
    };
}


#endif // NUMERALCONVERTER_H
