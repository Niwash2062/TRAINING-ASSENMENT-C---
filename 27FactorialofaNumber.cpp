#include <iostream>

using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "--- Factorial of a Number ---" << endl;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    // Factorial of 0 is 1
    if (n < 0) {
        cout << "Error! Factorial for negative numbers is not defined." << endl;
    } else {
        // Calculate factorial by multiplying from 1 up to n
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}