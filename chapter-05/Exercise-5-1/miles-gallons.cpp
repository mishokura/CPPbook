#include <iostream>
#include <fstream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
	cout << "Miles and Gallons\n\n";
	char choice;
	double miles;
	double gallons;
	cout << "Enter Miles: ";
	cin >> miles;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter Gallons: ";
	cin >> gallons;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//amis gaketeba do whiletic sheileba
	if (cin.good()) {
		ofstream foutput;
		foutput.open("miles_gallons.txt");
		foutput << "Miles\tGallons\n";
		foutput << fixed << setprecision(1) << miles << "\t";
		foutput << fixed << setprecision(1) << gallons << endl;
		foutput.close();
		cout << "do you want to add more?(y/n)";
		cin >> choice;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		while (choice == 'y' || choice == 'Y') {
			double miles;
			double gallons;
			cout << "Enter Miles: ";
			cin >> miles;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Enter Gallons: ";
			cin >> gallons;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			ofstream foutput;
			foutput.open("miles_gallons.txt", ios::app);
			foutput << fixed << setprecision(1) <<  miles << "\t";
			foutput << fixed << setprecision(1) << gallons << endl;
			foutput.close();

			cout << "do you want to add more?(y/n)";
			cin >> choice;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		cout << "\nBYE!\n\n";

	}
	else if (cin.fail()) {
		cout << "\n\ninvalid input.\n\n";
	}
	else if (cin.bad()) {
		cout << "\n\nError\n\n";
		return 0;
	}
}