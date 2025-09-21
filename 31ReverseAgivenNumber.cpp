#include <iostream>

using namespace std;

int main() {
    int n, reversed_number = 0, remainder;

    cout << "--- Reverse a Number ---" << endl;
    cout << "Enter an integer: ";
    cin >> n;

    int original_num = n; // Store the original number for display

    // Loop until the number becomes 0
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        reversed_number = reversed_number * 10 + remainder;
        n /= 10; // Remove the last digit
    }

    cout << "The reverse of " << original_num << " is: " << reversed_number << endl;

    return 0;
}