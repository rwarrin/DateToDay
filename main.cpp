/******************************************************************************
 * main.cpp
 *
 * Rick W
 * 02/20/2012
 *
 * Determine the day of the week that a given date falls on.
 *
 *****************************************************************************/

#include "day.h"

#include <iostream>
#include <sstream>
#include <string>

int main(void) {
    using namespace std;
    cout << "Determine the day of week a date falls on.\n";

    string temp = "";
    int day = 0;
    int month = 0;
    int year = 0;

    cout << "Enter the day [1 - 31]: ";
    getline(cin, temp);
    stringstream(temp) >> day;

    cout << "Enter the month [1 - 12]: ";
    getline(cin, temp);
    stringstream(temp) >> month;

    cout << "Enter the year [YYYY]: ";
    getline(cin, temp);
    stringstream(temp) >> year;

    cout << month << "/" << day << "/" << year << " is a ";
    cout << ConvertDateToDay(month, day, year) << endl;

    return 0;
}
