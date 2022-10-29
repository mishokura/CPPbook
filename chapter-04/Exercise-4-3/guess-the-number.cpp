#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    cout << "Guess the number program\n"
        << "Enter your guess from 1-10\n\n";


    //random number
    int upper_limit = 10;

    srand(time(nullptr));
    int number = rand() % upper_limit;
    ++number;

    int count = 1;
    while (true) {
        int guess;
        cout << "\nYour Guess:    ";
        cin >> guess;

        if (guess < 1 || guess > 10) {
            cout << "\ninvalid number, enter numbers from 1 to 10\n";
        }
        if (guess < number) {
            cout << "\ntoo low";
        }
        else if (guess > number) {
            cout << "\ntoo high";
        }
        else {
            cout << "\nyou guessed it in " << count << "  tries.\n\n";
        }

        ++count;
    }
    cout << "Bye !";
}
