#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    int min = 0;
    int max = 10;
    int correct_answer = min + rand() % max;

    int tries = 0;

    while (true) 
    {
        tries++;
        int guess;
        cout << "Guess the number between " << min << "-" << max << ": ";
        cin >> guess;

        if (guess == correct_answer) break;
        if (guess > correct_answer) 
        {
            cout << "You're a little too high, retry...\n";
        }
        else 
        {
            cout << "You're a little too low, retry...\n";
        }
    }
    cout << "You got it right in " << tries << " tries\n";

    return 0;
}