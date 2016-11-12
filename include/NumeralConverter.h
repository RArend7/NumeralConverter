#ifndef NUMERALCONVERTER_H
#define NUMERALCONVERTER_H

#include <string>

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
    };
}


#endif // NUMERALCONVERTER_H
