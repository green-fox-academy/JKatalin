#include <iostream>

int main() {
    int multipleNumber;
    std::cout << "Please enter a number: ";
    std::cin >> multipleNumber;

    int m = 0;
    while (m < 10) {
        std::cout << (m+1) << "*" << multipleNumber << "=" << (m+1) * multipleNumber << std::endl;
        ++m;
    }

    return 0;
}