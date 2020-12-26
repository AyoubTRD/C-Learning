#include <iostream>
#include <string>

using namespace std;

int main()
{
    srand(time(0));

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hi " << name << ", " << "You're amazing!\n";

    return 0;
}