#include <iostream>
#include <cmath> // For pow()

using namespace std;

int main() {
    int n, original_num, remainder, n_digits = 0;
    double result = 0.0;

    cout << "--- Armstrong Number Checker ---" << endl;
    cout << "Enter an integer: ";
    cin >> n;

    original_num = n;

    // 1. Count number of digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        n_digits++;
    }

    // 2. Calculate sum of powers of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n_digits);
        temp /= 10;
    }

    // 3. Check if number is Armstrong
    if ((int)result == original_num) {
        cout << original_num << " is an Armstrong number." << endl;
    } else {
        cout << original_num << " is not an Armstrong number." << endl;
    }

    return 0;
}