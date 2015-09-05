#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

// Supports up to 32-bit integers
string dec2bin(unsigned int inputNumber, const int exponent = sizeof(int) * 8 - 1)
{
    if (exponent < 0)               // base case
        return "";
    int binNum = pow(2, exponent);  // perform the operation only once to save time
    if (inputNumber < binNum)
        return "0" + dec2bin(inputNumber, exponent - 1);
    else
        return "1" + dec2bin(inputNumber - binNum, exponent - 1);
}


void main()
{

}