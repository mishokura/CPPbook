#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome to Future value calculator\n\n";
    char option = 'y';
    while (option == 'y' || option == 'Y') {
        double monthly_investment;
        cout << endl << "Enter Monthly Investment:         \n";
        cin >> monthly_investment;

        double interest_rate;
        cout << "Enter yearly interest rate:       \n";
        cin >> interest_rate;

        double years;
        cout << "Enter amount of years:            \n";
        cin >> years;
        //years to month
        int total_month = years * 12;
        //interest_rate to precent
        double total_rate = interest_rate / 100;
        //cout years = n
        int yrs = 1;
        for (yrs = 1; yrs > 0 && yrs <= years; ++yrs) {
            //calculate for each year
            double each_year;
            each_year = (12 * yrs * monthly_investment) + (monthly_investment * 12 * yrs * total_rate);
            cout << "Year =  " << yrs << "\t\tFuture value =        " << each_year << endl;
        }
        //option
        cout << "\nDo you want to continiue? (y/n):   ";
        cin >> option;
    }

}
