/*
Sam Goode
sgoode1@dmacc.edu
7/2/2020
This is the class AJ or jenni message me directly if you have any questions
about what I was thinking during all this.
So for the next file I was thinking the it would start out like this:

#include "DayOfYear.h"
#include <string.h>
#include <iostream>
using namespace std;

string DayOfYear::dayMonth ="";
int DayOfYear::restDays = 0;

DayOfYear::DayOfYear(int d)
{
    day = d;
}

void DayOfYear::setEndOfMonths()
{
    endOfMonth[0] = 0;
    ...
    endOfMonth[12] = 365;
}
void DayOfYear::setMonthNames()
{
    months[0] = "January";
	...
	months[11] = "December";   
*/

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <iostream>
#include <string.h>

using namespace std;

class DayOfYear
{
	private:
		int day;
		string months[12];
		int endOfMonth[13];
	public:
		DayOfYear(int d);
		void print();
		void setMonthNames();
		void setMonthNames();
} // end if DayOfYear class

