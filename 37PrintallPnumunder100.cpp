#include <iostream>

using namespace std;

int main() {
    cout << "--- Prime Numbers Under 100 ---" << endl;

    // Outer loop for numbers from 2 up to 99
    for (int num = 2; num < 100; ++num) {
        bool is_prime = true;
        
        // Inner loop to check for factors
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }

        // If no factors were found, it's prime
        if (is_prime) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}