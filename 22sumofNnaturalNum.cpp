#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum = 0; // Use long long to prevent overflow for large N

    cout << "--- Sum of First N Natural Numbers ---" << endl;
    cout << "Enter a positive integer (N): ";
    cin >> n;

    // Loop from 1 to n, adding each number to the sum
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}