#ifndef DATE_H
#define DATE_H

#include <ctime>
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructors and methods
    void init(int month, int day, int year);  // Initializes with provided values
    void init(void);                          // Initializes with the current system date
    void print(void) const;                   // Prints the date in the format: Month-Day-Year
};

#endif
