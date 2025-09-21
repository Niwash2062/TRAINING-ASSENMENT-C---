#include <iostream>
#include <cmath> // For abs()

using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "--- Count Digits in a Number ---" << endl;
    cout << "Enter an integer: ";
    cin >> n;

    // Special case for 0
    if (n == 0) {
        count = 1;
    } else {
        // Use a temporary variable to not change the original number
        // Use abs() to handle negative numbers correctly
        long long temp = abs((long long)n); 
        
        // Keep removing the last digit until the number is 0
        while (temp != 0) {
            temp /= 10; // Integer division removes the last digit
            count++;
        }
    }

    cout << "The number of digits is: " << count << endl;

    return 0;
}