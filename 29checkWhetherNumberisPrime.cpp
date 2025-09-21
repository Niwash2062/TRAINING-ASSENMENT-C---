#include <iostream>
#include <cmath> // For sqrt()

using namespace std;

int main() {
    int n;
    bool is_prime = true;

    cout << "--- Prime Number Checker ---" << endl;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Prime numbers are greater than 1
    if (n <= 1) {
        is_prime = false;
    } else {
        // Loop from 2 up to the square root of n
        // If n is divisible by any number in this range, it's not prime
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                is_prime = false;
                break; // Exit the loop as soon as a factor is found
            }
        }
    }

    if (is_prime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}