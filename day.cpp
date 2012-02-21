#include "day.h"

#include <math.h>
#include <iostream>

std::string ConvertDateToDay(const int &month, const int &day, const int &year) {
    using namespace std;

    int fYear = GetAdjustedYear(month, year);
    int fDay = day;
    int fMonth = GetShiftedMonth(month);
    int fFirstDigits = GetFirstTwoDigitsOfYear(fYear);
    int fLastDigits = GetLastTwoDigitsOfYear(fYear);

    int fWeekDay = (fDay + static_cast<int>(2.6 * fMonth - 0.2) + fLastDigits + static_cast<int>(fLastDigits / 4) + static_cast<int>(fFirstDigits / 4) - 2 * fFirstDigits);
    fWeekDay = fWeekDay % 7;
    return GetNameOfDay(fWeekDay);
}

int GetAdjustedYear(const int &month, const int&year) {
    if(month == 1 || month == 2)
        return year - 1;

    return year;
}

int GetShiftedMonth(const int &month) {
    int newMonth;
    newMonth = ((month + 9) % 12) + 1;
    return newMonth;
}

int GetFirstTwoDigitsOfYear(const int &year) {
    int firstDigits = 0;
    firstDigits = year / 100;
    return firstDigits;
}

int GetLastTwoDigitsOfYear(const int &year) {
    int lastDigits = 0;
    lastDigits = year % 100;
    return lastDigits;
}

std::string GetNameOfDay(const int &day) {
    if(day == 0)
        return "Sunday";
    else if(day == 1)
        return "Monday";
    else if(day == 2)
        return "Tuesday";
    else if(day == 3)
        return "Wednesday";
    else if(day == 4)
        return "Thursday";
    else if(day == 5)
        return "Friday";
    else if(day == 6)
        return "Saturday";

    return "Error";
}
