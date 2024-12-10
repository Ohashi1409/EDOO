#include "Date.h"

int main() {
    Date date1, date2;

    // Initialize date1 with specific values
    date1.init(11, 12, 2024);
    // Initialize date2 with the current system date
    date2.init();

    // Print the dates
    cout << "Date 1: ";
    date1.print();  // Output: 12-10-2024

    cout << "Date 2 (Current date): ";
    date2.print();  // Output: Current date in Month-Day-Year format

    // Using object assignment
    Date date3;
    date3 = date1;  // Assign date1's values to date3

    cout << "Date 3 (Assigned from Date 1): ";
    date3.print();  // Output: 12-10-2024

    // Using references and pointers to objects
    Date& refDate = date2;
    Date* ptrDate = &date1;

    cout << "Date (using reference): ";
    refDate.print();  // Output: Current date (same as date2)

    cout << "Date (using pointer): ";
    ptrDate->print();  // Output: 12-10-2024 (same as date1)

    return 0;
}
