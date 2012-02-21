#ifndef DATETODAY_H
#define DATETODAY_H

#include <string>

/*
 * Takes a month, a day, and a year as string objects. It determines the day of
 * the week.  It will return a string of the name of the day of the week that
 * the day falls on.
 */
std::string ConvertDateToDay(const int &month, const int &day, const int &year);

/*
 * Takes the inputed year and adjusts it if it needs to be.  If the month is
 * January or February then year-1 is returned, otherwise year is returned.
 */
int GetAdjustedYear(const int &month, const int &year);

/*
 * Shifts the numerical value of the month such that March=1 and Februray=12.
 * Returns a number represting the shifted month.
 */
int GetShiftedMonth(const int &month);

/*
 * Takes the year after it has been adjusted and returns the first two digits
 * of that number.
 */
int GetFirstTwoDigitsOfYear(const int &year);

/*
 * Takes the year after it has been adjusted and returns the last two digits of
 * that number.
 */
int GetLastTwoDigitsOfYear(const int &year);

/*
 * Takes a day represented as a number from 0(Sunday) to 6(Saturday).  Returns
 * the name of the day as a string.
 */
std::string GetNameOfDay(const int &day);

#endif  // DATETODAY_H
