#include <iostream>
#include <algorithm> // Needed for the alternative method using min/max

// Use the standard namespace to avoid typing std:: repeatedly
using namespace std;

int main() {
    double num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    cout << "\n--- Using if-else logic ---" << endl;

    // --- Main Logic to find the middle number ---

    // Check if num1 is the middle number
    // This is true if (num2 <= num1 <= num3) OR (num3 <= num1 <= num2)
    if ((num2 <= num1 && num1 <= num3) || (num3 <= num1 && num1 <= num2)) {
        cout << "The middle number is: " << num1 << endl;
    }
    // Check if num2 is the middle number
    // This is true if (num1 <= num2 <= num3) OR (num3 <= num2 <= num1)
    else if ((num1 <= num2 && num2 <= num3) || (num3 <= num2 && num2 <= num1)) {
        cout << "The middle number is: " << num2 << endl;
    }
    // If neither num1 nor num2 is the middle, then num3 must be
    else {
        cout << "The middle number is: " << num3 << endl;
    }


    // --- Alternative, more concise method ---
    cout << "\n--- Using an alternative mathematical trick ---" << endl;
    double sum = num1 + num2 + num3;
    double largest = max({num1, num2, num3});
    double smallest = min({num1, num2, num3});
    double middle = sum - largest - smallest;
    
    cout << "The middle number is: " << middle << endl;


    return 0; // Indicate successful execution
}