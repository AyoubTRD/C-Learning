#include <iostream>
#include <cmath>

using namespace std;

double myPow(double base, int exponent)
{
    double result = 1.0;
    if (exponent > 1) 
    {
        for (int i = 0; i < exponent; i++)
        {
            result *= base;
        }
    }
    else {
        for (int i = 0; i > exponent; i--)
        {
            result /= base;
        }
    }

    return result;
}

int main()
{
    double base;
    int exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // double result = pow(base, exponent);
    double result = myPow(base, exponent);
    cout << base << "^" << exponent << " = " << result << "\n";

    return 0;
}