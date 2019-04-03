#include <iostream>

int main() {
    int testNumber2;
    std::cout << "Please enter a number: ";
    std::cin >> testNumber2;
    if (testNumber2 <= 0) {
        std::cout << "Not enough" << std::endl;
    } else if (testNumber2 == 1) {
        std::cout << "One" << std::endl;
    } else if (testNumber2 == 2) {
        std::cout << "Two" << std::endl;
    } else {
        std::cout << "A lot" << std::endl;
    }


    return 0;
}