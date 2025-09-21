#include <iostream>
using namespace std;

int main() {
    double l,w,h;

    cout << "Enter length of the cuboid: ";
    cin >> l;

    cout << "Enter width of the cuboid: ";
    cin >> w;

    cout << "Enter height of the cuboid: ";
    cin >> h;

    // Calculate volume
    double volume = l* w* h;

    cout << "Volume of the cuboid is: " << volume << endl;

    return 0;
}
