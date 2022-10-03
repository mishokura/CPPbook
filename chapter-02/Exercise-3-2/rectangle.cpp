#include <iostream>
using namespace std;
int main() {

	cout << "Rectangle calculator" << endl << endl;
	
	double length;
	double height;
	cout << "specify dimentions [length, height]:               ";
	cin >> length;
	cin >> height;

	if (length == 0) {
		cout << "Height and width must be greater than zero." << endl;
	}
	else if (height == 0) {
		cout << "Height and width must be greater than zero." << endl;
	}

	//calculations
	double area;
	area = length * height;
	double areaoutput;
	areaoutput = (area * 10) / 10;

	//output
	cout << "area of this rectangle is:      " << areaoutput << endl << endl;
	return 0;




}