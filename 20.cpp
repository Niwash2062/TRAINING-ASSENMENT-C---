#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    double n1, n2, n3, n4;

    // Prompt the user and get the four numbers
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;
    cout << "Enter the fourth number: ";
    cin >> n4;

    // --- Main Method: Iterative Comparison ---

    // 1. Assume the first number is the largest
    double largest = n1;

    // 2. Compare with the second number and update if necessary
    if (n2 > largest) {
        largest = n2;
    }

    // 3. Compare with the third number and update if necessary
    if (n3 > largest) {
        largest = n3;
    }

    // 4. Compare with the fourth number and update if necessary
    if (n4 > largest) {
        largest = n4;
    }

    // 5. Print the final result
    cout << "\nThe largest number is: " << largest << endl;


    // --- Alternative Method: Using std::max ---
    cout << "\n--- Using the std::max function (alternative) ---" << endl;
    double max_result = max({n1, n2, n3, n4});
    cout << "The largest number is: " << max_result << endl;

    return 0; // Indicate successful execution
}