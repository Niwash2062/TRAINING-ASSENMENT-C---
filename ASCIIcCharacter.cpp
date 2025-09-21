#include <iostream>

int main() {
    int asciiCode;
    std::cout << "Enter an ASCII code (0-127): ";
    std::cin >> asciiCode;

    if (asciiCode >= 0 && asciiCode <= 127) {
        char character = static_cast<char>(asciiCode);
        std::cout << "The character for ASCII code " << asciiCode << " is '" << character << "'." << std::endl;
    } else {
        std::cout << "Invalid ASCII code. Please enter a value between 0 and 127." << std::endl;
    }

    return 0;
}
