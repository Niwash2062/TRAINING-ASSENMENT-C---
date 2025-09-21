#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum_of_cubes = 0;

    cout << "--- Sum of Cubes of First N Natural Numbers ---" << endl;
    cout << "Enter a positive integer (N): ";
    cin >> n;

    // Loop from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Add the cube of i to the sum
        sum_of_cubes += (long long)i * i * i;
    }

    cout << "The sum of cubes is: " << sum_of_cubes << endl;

    return 0;
}