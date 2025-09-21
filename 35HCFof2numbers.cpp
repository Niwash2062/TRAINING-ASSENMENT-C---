#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "--- HCF of Two Numbers ---" << endl;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    int temp_n1 = n1;
    int temp_n2 = n2;

    // Euclidean algorithm to find HCF
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    cout << "HCF of " << temp_n1 << " and " << temp_n2 << " is: " << n1 << endl;

    return 0;
}