#include <iostream>
using namespace std;

int main() {
    double cp, sp;

    cout << "Enter cost price per dozen bananas: ";
    cin >> cp;

    cout << "Enter selling price per dozen bananas: ";
    cin >> sp;

    // Calculate cost price and selling price for 25 bananas
    double costPricePerBanana = cp / 12.0;
    double sellingPricePerBanana = sp / 12.0;

    double totalCostPrice = costPricePerBanana * 25;
    double totalSellingPrice = sellingPricePerBanana * 25;

    double profitOrLoss = totalSellingPrice - totalCostPrice;

    if (profitOrLoss > 0) {
        cout << "Profit earned: " << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "Loss incurred: " << -profitOrLoss << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}
