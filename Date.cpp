#include <iostream>
#include <string>
using namespace std;

int main() {
    string date;
    cout << "Enter date in DD/MM/YYYY format: ";
    cin >> date;

    // Extract day, month, and year substrings
    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 4);

    cout << "Day – " << day << " , Month – " << month << " , Year – " << year << endl;

    return 0;
}
