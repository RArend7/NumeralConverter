#ifndef ARABICTOROMAN_H
#define ARABICTOROMAN_H

#include <string>

namespace numcon
{
    class ArabicToRoman
    {
        public:
            ArabicToRoman();
            virtual ~ArabicToRoman();
            std::string convert(int input);

        protected:

        private:
    };
}
#endif // ARABICTOROMAN_H
