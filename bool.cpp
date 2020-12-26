#include <iostream>

using namespace std;

int main()
{
    bool hasCar;
    cout << "Do you have a car? 1 is yes, 0 is no: ";

    cin >> hasCar;

    if (hasCar)
    {
        cout << "You have a car";
    }
    else
    {
        cout << "You don't have a car";
    }
    cout << endl;
}