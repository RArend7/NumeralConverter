#ifndef ROMANTOARABIC_H
#define ROMANTOARABIC_H

#include <string>

namespace numcon
{
    class RomanToArabic
    {
        public:
            RomanToArabic();
            virtual ~RomanToArabic();
            int convert(const std::string& input);

        protected:

        private:
    };
}

#endif // ROMANTOARABIC_H
