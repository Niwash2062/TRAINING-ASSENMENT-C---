#include <iostream>
using namespace std;

int main() {
    int month, year;

    // Get the month and year from the user
    cout << "Enter the month (1-12): ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;

    cout << "\n"; 

    // Use a switch statement to handle different months
    switch (month) {
        // Months with 31 days
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "There are 31 days in this month." << endl;
            break;

        // Months with 30 days
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "There are 30 days in this month." << endl;
            break;

        // Special case for February
        case 2:
            // Check for leap year
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                cout << "This is a leap year. There are 29 days in this month." << endl;
            } else {
                cout << "There are 28 days in this month." << endl;
            }
            break;

        // Handle invalid month input
        default:
            cout << "Error: Invalid month. Please enter a number between 1 and 12." << endl;
            break;
    }

    return 0; // Indicate successful execution
}