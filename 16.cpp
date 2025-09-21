#include <iostream>
#include <iomanip> // Required for setting output precision

int main() {
    double temp;
    char unit;

    // Prompt user for input
    std::cout << "Enter a temperature value: ";
    std::cin >> temp;

    std::cout << "Enter the unit (C for Celsius, F for Fahrenheit): ";
    std::cin >> unit;

    // Set the output to show two decimal places
    std::cout << std::fixed << std::setprecision(2);

    // Check the unit and perform the correct conversion
    if (unit == 'F' || unit == 'f') {
        // Convert Fahrenheit to Celsius
        double celsius = (temp - 32.0) * 5.0 / 9.0;
        std::cout << temp << "°F is equal to " << celsius << "°C." << std::endl;
    } else if (unit == 'C' || unit == 'c') {
        // Convert Celsius to Fahrenheit
        double fahrenheit = (temp * 9.0 / 5.0) + 32.0;
        std::cout << temp << "°C is equal to " << fahrenheit << "°F." << std::endl;
    } else {
        // Handle invalid unit input
        std::cout << "Error! Invalid unit. Please enter 'C' or 'F'." << std::endl;
    }

    return 0;
}