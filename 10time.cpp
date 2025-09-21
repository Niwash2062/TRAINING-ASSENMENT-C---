#include <iostream>
#include <string>
using namespace std;

int main() {
    string time;
    cout << "Enter time in HH:MM format: ";
    cin >> time;

    // Extract hours and minutes
    string hours = time.substr(0, 2);
    string minutes = time.substr(3, 2);

    cout << "Hours – " << hours << " , Minutes – " << minutes << endl;

    return 0;
}
