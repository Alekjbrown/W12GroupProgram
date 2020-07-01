#include <iomanip>
#include <iostream>
#include "DayOfYear.h"
using namespace std;

int main()
{
	int dayNumber;
	
	cout<<"Enter a day-number between 1 and 365: ";
	cin>>dayNumber;
	
	while (dayNumber<1 || dayNumber>365)
	{
		cout<<"That is invalid. Please try again: ";
		cin>> dayNumber
	}
	
	DayOfYear d(dayNumber);
	
	d.setMonthNames();
	d.print();
	system("pause");
	
	return 0;
}
