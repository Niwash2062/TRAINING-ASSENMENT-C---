#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest (in %): ";
    cin >> rate;

    cout << "Enter time period (in years): ";
    cin >> time;

    // Calculate simple interest
    double simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest is: " << simpleInterest << endl;

    return 0;
}
