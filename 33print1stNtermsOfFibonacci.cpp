#include <iostream>

using namespace std;

int main() {
    int n;
    long long t1 = 0, t2 = 1, next_term = 0;

    cout << "--- First N Terms of Fibonacci Series ---" << endl;
    cout << "Enter the number of terms (N): ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Print the first two terms
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        // Calculate and print the rest
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
        
        cout << next_term << " ";
    }
    cout << endl;

    return 0;
}