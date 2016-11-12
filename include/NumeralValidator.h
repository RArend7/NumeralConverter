#ifndef NUMERALVALIDATOR_H
#define NUMERALVALIDATOR_H

#include <string>

namespace numcon
{
    class NumeralValidator
    {
        public:
            NumeralValidator();
            virtual ~NumeralValidator();
            bool is_roman_numeral(std::string& input);
            bool is_arabic_numeral(std::string& input);

        protected:

        private:
    };
}


#endif // NUMERALVALIDATOR_H
