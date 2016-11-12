#include <iostream>
#include <string>
#include "NumeralConverter.h"
#include "ConverterTester.h"

using namespace std;

#define QUIT_STRING "quit"

int main()
{
    numcon::ConverterTester unitTester = numcon::ConverterTester();
    unitTester.run_tests();

    cout << "Ryan's Numeral Converter\n" << endl;
    cout << "Enter an Arabic or Roman numeral and it will be converted to the other type." << endl;
    cout << "Type 'quit' to exit." << endl;
    cout << endl;

    string input;
    numcon::NumeralConverter mainConverter = numcon::NumeralConverter();

    while (input != QUIT_STRING)
    {
        cin >> input;
        if (input == QUIT_STRING)
            break;

        string output = mainConverter.convert_numeral(input);
        cout << output << "\n" << endl;
    }

    return 0;
}
