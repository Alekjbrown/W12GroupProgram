#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

/*
Sam Goode
sgoode1@dmacc.edu
Alek Brown
alekjbrown@live.com
7/2/2020
This is the class AJ or jenni message me directly if you have any questions
*/


#include <iostream>
#include <string>

using namespace std;

class DayOfYear
{
private:
	int day;
	string date;
	string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; //Array of months
	int endOfMonth[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};																	//array of amount of days at end of each month
	string getDate(int d, int arr[], string mArr[]);																								//function to set date

public:
	//constructor
	DayOfYear(int d)
	{
		day = d;
		date = "";
		date = getDate(day, endOfMonth, months);
	}
	void print();
}; // end if DayOfYear class

//function to print data in class
void DayOfYear::print()
{
	cout << "Day " << day << " of the year is " << date << endl;
}

//function to calculate date
//@param day,days array, month array
string DayOfYear::getDate(int d, int arr[], string mArr[])
{
	string date = "";

	if (d <= arr[0])
	{
		date = mArr[0] + "-";
		date.append(to_string(d) + '\n');
	}
	else if (d <= arr[1])
	{
		date = mArr[1] + "-";
		date.append(to_string(d - arr[0]) + '\n');
	}
	else if (d <= arr[2])
	{
		date = mArr[2] + "-";
		date.append(to_string(d - arr[1]) + '\n');
	}
	else if (d <= arr[3])
	{
		date = mArr[3] + "-";
		date.append(to_string(d - arr[2]) + '\n');
	}
	else if (d <= arr[4])
	{
		date = mArr[4] + "-";
		date.append(to_string(d - arr[3]) + '\n');
	}
	else if (d <= arr[5])
	{
		date = mArr[5] + "-";
		date.append(to_string(d - arr[4]) + '\n');
	}
	else if (d <= arr[6])
	{
		date = mArr[6] + "-";
		date.append(to_string(d - arr[5]) + '\n');
	}
	else if (d <= arr[7])
	{
		date = mArr[7] + "-";
		date.append(to_string(d - arr[6]) + '\n');
	}
	else if (d <= arr[8])
	{
		date = mArr[8] + "-";
		date.append(to_string(d - arr[7]) + '\n');
	}
	else if (d <= arr[9])
	{
		date = mArr[9] + "-";
		date.append(to_string(d - arr[8]) + '\n');
	}
	else if (d <= arr[10])
	{
		date = mArr[10] + "-";
		date.append(to_string(d - arr[9]) + '\n');
	}
	else
	{
		date = mArr[11] + "-";
		date.append(to_string(d - arr[10]) + '\n');
	}

	return date;
}

#endif