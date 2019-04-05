#include <iostream>


int main(int argc, char *args[]) {
    int a;
    std::cout << "Please enter the first number: ";
    std::cin >> a;

    int b;
    std::cout << "Please enter the second number: ";
    std::cin >> b;

    if (a >= b) {
        std::cout << "The second number should be bigger" << std::endl;
    } else {
        std::cout << "first number: " << a << ", second number: " << b << ", should print:" << std::endl;
        int s = a;
        while (s < b) {
            std::cout << s << std::endl;
            s++;
        }
    }

    return 0;
}



// Create a program that asks for two numbers
// If the second number is not bigger than the first one it should print:
// "The second number should be bigger"
//
// If it is bigger it should count from the first number to the second by one
//
// example:
//
// first number: 3, second number: 6, should print:
//
// 3
// 4
// 5