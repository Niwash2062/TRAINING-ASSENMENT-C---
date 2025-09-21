#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "--- Armstrong Numbers Under 1000 ---" << endl;

    // Loop through numbers from 1 to 999
    for (int num = 1; num < 1000; ++num) {
        int original_num = num;
        int n_digits = 0;
        double result = 0.0;

        // Count digits
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n_digits++;
        }

        // Calculate sum of powers
        temp = num;
        while (temp != 0) {
            int remainder = temp % 10;
            result += pow(remainder, n_digits);
            temp /= 10;
        }

        // If it's an Armstrong number, print it
        if ((int)result == original_num) {
            cout << original_num << " ";
        }
    }
    cout << endl;

    return 0;
}