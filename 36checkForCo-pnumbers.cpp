#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "--- Co-prime Number Checker ---" << endl;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    int hcf;
    int temp_n1 = n1, temp_n2 = n2;

    // Find HCF
    while (temp_n2 != 0) {
        int temp = temp_n2;
        temp_n2 = temp_n1 % temp_n2;
        temp_n1 = temp;
    }
    hcf = temp_n1;

    // Check if HCF is 1
    if (hcf == 1) {
        cout << n1 << " and " << n2 << " are co-prime." << endl;
    } else {
        cout << n1 << " and " << n2 << " are not co-prime." << endl;
    }

    return 0;
}