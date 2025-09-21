#include <iostream>

using namespace std;

int main() {
    int num1, num2, max;

    cout << "--- LCM of Two Numbers ---" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Loop indefinitely until LCM is found
    while (true) {
        // The first multiple of 'max' that is also divisible by the other number is the LCM
        if (max % num1 == 0 && max % num2 == 0) {
            cout << "LCM of " << num1 << " and " << num2 << " is: " << max << endl;
            break; // Exit the loop
        }
        // Increment max to check the next multiple
        max++;
    }

    return 0;
}