//Aleksander Brown
//alejbrown@live.com
//Jennifer Jarrell
//Sam Goode

#include <iostream>
using namespace std;

int main()
{
    int dayNumber;
    bool valid = false;

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

    d.setMonthNames();
    d.print();
    system("pause");

    return 0;
}
