#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "--- Sum of First N Even Natural Numbers ---" << endl;
    cout << "Enter how many even numbers to sum (N): ";
    cin >> n;

    // Loop N times
    for (int i = 1; i <= n; ++i) {
        // Add the i-th even number (2 * i) to the sum
        sum += (2 * i);
    }

    cout << "The sum of the first " << n << " even numbers is: " << sum << endl;

    return 0;
}