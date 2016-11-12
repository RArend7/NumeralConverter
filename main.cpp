#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Ryan's Numeral Converter\n" << endl;
    cout << "Enter an Arabic or Roman numeral and it will be converted to the other type." << endl;
    cout << "Type 'quit' to exit." << endl;
    cout << endl;

    string input;

    while (input != "quit")
    {
        cin >> input;
    }

    return 0;
}
