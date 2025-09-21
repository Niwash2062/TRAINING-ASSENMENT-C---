#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Print ASCII code by converting char to int
    cout << "ASCII code of '" << ch << "' is: " << static_cast<int>(ch) << endl;

    return 0;
}
