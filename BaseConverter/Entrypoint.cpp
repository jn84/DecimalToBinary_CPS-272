////////////////////////////////////////////////////////////////////////// 
//       Name: Jeremy Nims
// Assignment: MP2 - Part 2 - Binary to Decimal
//     Course: CPS 272, Wed 5:30
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string dec2bin(const unsigned long inputNumber, const int power = sizeof(long) * 8 - 1);

void main()
{
    unsigned long n = 0;
    while (true)
    {
        cout << "Enter a number to convert to binary: ";
        cin >> n;
        if (cin.fail())
            break;
        cout << dec2bin(n) << " is the binary equivalent of the decimal number " << n << endl << endl;
    }
}

// No negative numbers
string dec2bin(const unsigned long inputNumber, const int power)
{
    if (power < 0) return "";                        // base case
    return inputNumber < pow(2, power) ?
        "0" + dec2bin(inputNumber, power - 1) :
        "1" + dec2bin(inputNumber - pow(2, power), power - 1);
}