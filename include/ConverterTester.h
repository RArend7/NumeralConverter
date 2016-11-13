#ifndef CONVERTERTESTER_H
#define CONVERTERTESTER_H

#include <string>
#include "NumeralConverter.h"

namespace numcon
{
    class ConverterTester
    {
        public:
            ConverterTester();
            virtual ~ConverterTester();
            void run_tests();

        protected:

        private:
            std::string input;
            std::string output;

            NumeralConverter numeralConverter;
            void check_input();
            void check_roman_conversion();
    };
}

#endif // CONVERTERTESTER_H
