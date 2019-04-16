#include <iostream>
#include <fstream>

int main() {
    try {
        int divider;
        std::cout << "Give me a divider number: " << std::endl;
        std::cin >> divider;
        int number = 10;

        if (divider == 0) {
            throw std::string("Fail");
        }
        std::cout << "The result is: " << number / divider << std::endl;
    } catch (std::string &e) {
        std::cout << e << std::endl;
    }

    return 0;
}

// Create a function that takes a number
// divides ten with it,
// and prints the result.
// It should print "fail" if the parameter is 0