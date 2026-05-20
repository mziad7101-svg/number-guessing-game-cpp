#include <iostream>
using namespace std;

int main()
{
    int secret = 7;
    int guess;

    do
    {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess > secret)
            cout << "Too high\n";

        else if (guess < secret)
            cout << "Too low\n";

    } while (guess != secret);

    cout << "Correct!";

    return 0;
}