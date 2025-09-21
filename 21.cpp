#include <iostream>
using namespace std;

int main() {
    int dayNum;
    cout << "Enter a number (1-7): ";
    cin >> dayNum;

    // Use an if-else if-else chain to find the corresponding day
    if (dayNum == 1) {
        cout << "Monday" << endl;
    } else if (dayNum == 2) {
        cout << "Tuesday" << endl;
    } else if (dayNum == 3) {
        cout << "Wednesday" << endl;
    } else if (dayNum == 4) {
        cout << "Thursday" << endl;
    } else if (dayNum == 5) {
        cout << "Friday" << endl;
    } else if (dayNum == 6) {
        cout << "Saturday" << endl;
    } else if (dayNum == 7) {
        cout << "Sunday" << endl;
    } else {
        // This block runs if dayNum is not between 1 and 7
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0; // Indicate successful execution
}