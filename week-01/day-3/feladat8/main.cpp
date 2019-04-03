#include <iostream>

int main() {
    std::string yourName;
    std::cout << "Please enter your name: ";
    std::cin >> yourName;
    std::cout << "Hello, " << yourName << "!" << std::endl;

    return 0;
}