#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum_of_squares = 0;

    cout << "--- Sum of Squares of First N Natural Numbers ---" << endl;
    cout << "Enter a positive integer (N): ";
    cin >> n;

    // Loop from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Add the square of i to the sum
        sum_of_squares += (long long)i * i;
    }

    cout << "The sum of squares is: " << sum_of_squares << endl;

    return 0;
}