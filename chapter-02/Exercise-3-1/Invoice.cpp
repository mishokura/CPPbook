#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Welcome to Invoice Program" << endl << endl;
	
	A:
	//customer type
	char type;
	cout << "Enter customer type(r/w/c):          ";
	cin >> type;

	//check if costomer type exists
	if (tolower(type) != 'r') {
		cout << "customer type not found, try again." << endl;
			goto A;
	}
	else {goto B; 
	}
	if (tolower(type) != 'w') {
		cout << "customer type not found, try again." << endl;
		goto A;
	}
	else {
		goto B;
	}
	if (tolower(type) != 'c') {
		cout << "customer type not found, try again." << endl;
		goto A;
	}
	else {
		goto B;
	}

	B:
	//get subtotal
	double subtotal;
	cout << "enter subtotal:        ";
	cin >> subtotal;

		//customer r
		double discount = .0;
		if (tolower(type) == 'r' && subtotal > 250 && subtotal < 500) {
			discount = .2;
		}
		else if (tolower(type) == 'r' && subtotal > 500) {
			discount = .3;
		}

		//customer w        !!! aq ar vici ra safasurze ra fasdakleba unda yofiliyo da prosta 100 da 300 chavsvi.
		if (tolower(type) == 'w' && subtotal > 100 && subtotal < 300) {
			discount = .2;
		}
		else if (tolower(type) == 'w' && subtotal > 500) {
			discount = .3;
		}

		//customer c
		if (tolower(type) == 'c') {
			discount = .25;
		}

	//calculations
	//discount amount
	double total;
	total = subtotal - subtotal * discount;
	//total amount
	double amount;
	amount = subtotal * discount;

	//output
	cout << "Discount precent %:      " << discount * 100 << endl;
	cout << "Discount amount:         " << amount << endl;
	cout << "Invoice total:           " << total << endl;




}