#include "Date.h"

// Initializes the date with provided values
void Date::init(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

// Initializes the date with the current system date
void Date::init(void) {
    time_t sec;
    struct tm* ptr;

    // Get the current time
    time(&sec);
    ptr = localtime(&sec);

    // Extract the current date information
    day = ptr->tm_mday;
    month = ptr->tm_mon + 1;  // tm_mon is 0-indexed (0 = January, 11 = December)
    year = ptr->tm_year + 1900; // tm_year is years since 1900
}

// Prints the date in Month-Day-Year format
void Date::print(void) const {
    cout << month << "-" << day << "-" << year << endl;
}
