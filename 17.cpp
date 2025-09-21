#include <iostream>

// Use the standard namespace to avoid typing std:: repeatedly
using namespace std;

int main() {
    int startYear, endYear;

    // Get the range from the user
    cout << "Enter the start year: ";
    cin >> startYear;

    cout << "Enter the end year: ";
    cin >> endYear;

    // Basic input validation
    if (startYear > endYear) {
        cout << "Error: The start year cannot be greater than the end year." << endl;
        return 1; // Exit with an error code
    }

    cout << "\nLeap years between " << startYear << " and " << endYear << ":" << endl;

    // Loop through each year in the given range (inclusive)
    for (int year = startYear; year <= endYear; year++) {
        
        // Check if the current year is a leap year
        // A year is a leap year if it's divisible by 400 OR
        // if it's divisible by 4 BUT NOT by 100.
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            cout << year << endl;
        }
    }

    return 0; // Indicate successful execution
}