#include <iostream>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;

string dec2bin(const unsigned long inputNumber, const int power = sizeof(long) * 8 - 1);

void main()
{

}

// Supports at least 32-bit unsigned integers (system dependent)
string dec2bin(const unsigned long inputNumber, const int power)
{
    if (power < 0) return "";                        // base case
    return inputNumber < pow(2, power) ?
        "0" + dec2bin(inputNumber, power - 1) :
        "1" + dec2bin(inputNumber - pow(2, power), power - 1);
}