#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;

    // Function to display character and ASCII code with validation
    auto displayCharInfo = [](char ch) {
        if (ch >= 32 && ch <= 126) {  // Printable ASCII range
            cout << "Character: " << ch << "  ASCII code: " << static_cast<int>(ch) << endl;
        } else {
            cout << "Character: Non-printable  ASCII code: " << static_cast<int>(ch) << endl;
        }
    };

    displayCharInfo(ch1);
    displayCharInfo(ch2);
    displayCharInfo(ch3);

    return 0;
}
