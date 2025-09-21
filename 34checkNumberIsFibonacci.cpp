#include <iostream>

using namespace std;

int main() {
    int n;
    long long a = 0, b = 1, c = 0;
    bool is_fibonacci = false;

    cout << "--- Check if Number is in Fibonacci Series ---" << endl;
    cout << "Enter a number to check: ";
    cin >> n;

    if (n == a || n == b) {
        is_fibonacci = true;
    } else {
        // Generate Fibonacci numbers until they are >= n
        while (c < n) {
            c = a + b;
            a = b;
            b = c;
        }
        // Check if the generated number equals n
        if (c == n) {
            is_fibonacci = true;
        }
    }

    if (is_fibonacci) {
        cout << n << " is a Fibonacci number." << endl;
    } else {
        cout << n << " is not a Fibonacci number." << endl;
    }

    return 0;
}