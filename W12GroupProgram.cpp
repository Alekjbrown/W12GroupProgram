//Aleksander Brown
//alekjbrown@live.com
//July 5,2020
//Sam Goode
//sgoode1@dmacc.edu

//this program demonstrates classes and header files. User inputs a number of days and receives a date

#include <iomanip>
#include <iostream>
#include "DayOfYear.h"
using namespace std;

int main()
{
    int dayNumber;          //day of the year number from user
    bool valid = false;     //validation bool

    while (!valid)
    {
        cout << "Enter a day-number between 1 and 365: ";

        if (cin >> dayNumber && dayNumber > 0 && dayNumber < 366)
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(1024, '\n');
            cout << "That is invalid. Please try again: ";
        }
    }
    valid = false;

    DayOfYear d(dayNumber);

    d.print();

    return 0;
}


//TEST DATA
//@Jenni, please test and add test data
//INPUT                         OUTPUT
