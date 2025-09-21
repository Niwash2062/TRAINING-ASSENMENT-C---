#include <iostream>

using namespace std;

int main() {
    int n;
    long long t1 = 0, t2 = 1, next_term = 0;

    cout << "--- Nth Term of Fibonacci Series ---" << endl;
    cout << "Enter a positive number (N): ";
    cin >> n;

    if (n == 1) {
        cout << "The 1st term is: " << t1 << endl;
    } else if (n == 2) {
        cout << "The 2nd term is: " << t2 << endl;
    } else {
        // Loop from the 3rd term up to the Nth term
        for (int i = 3; i <= n; ++i) {
            next_term = t1 + t2;
            t1 = t2;
            t2 = next_term;
        }
        cout << "The " << n << "th term is: " << next_term << endl;
    }

    return 0;
}