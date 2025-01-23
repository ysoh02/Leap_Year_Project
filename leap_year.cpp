#include <iostream>
using namespace std;

int main() {

    int year;



    cout << "Please enter a year: ";
    cin >> year;

    while (year < 1000 || year >9999) {
        cout << "PLease enter a four digit year: ";
        cin >> year;
    }



    if (year % 4 == 0 && (year % 100 == 0 && year % 400 == 0)) {
        cout << " " << year << " is a leap year";
    }
    else {
        cout << " " << year << " is not a leap year";

    }







}
