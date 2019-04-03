#include <iostream>

int main() {
    int testNumber;
    std::cout << "Please enter a number: ";
    std::cin >> testNumber;
    if ( testNumber % 2 == 0 ) {
        std::cout << "Even" << std:: endl;
    } else {
        std::cout << "Odd" << std:: endl;
    }


    return 0;
}