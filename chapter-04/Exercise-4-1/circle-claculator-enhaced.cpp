#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Circle Calculator\n\n";

    char option = 'y';
    while (option == 'y' || option == 'Y') {
        double radius;
        cout << "\nEnter radius of the circle:       ";
        cin >> radius;

        if (radius <= 0) {
            cout << "invalid entry, try again.\n";
        }
        else {
            //calculate
            double pi = 3.14;
            double diameter = 2 * radius;
            double circum = 2 * pi * radius;
            double area = pi * pow(radius, 2.0);

            //output
            cout << "Diameter:             " << diameter << endl
                << "Circumference:        " << circum << endl
                << "Area:                 " << area << endl << endl;

            //yes or no (es sheileboda zeda couttan ertad daweriliyo mara ese uket chans)
            cout << "Enter another radius? (y/n)   ";
            cin >> option;
        }

    }

    cout << "bye!\n\n";
}
