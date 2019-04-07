#include <iostream>

int main(int argc, char *args[]) {

    int a;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> a;

    int b;
    std::cout << "Please enter an other different number:" << std::endl;
    std::cin >> b;

    if (a > b) {
        std::cout << "The bigger number is: " << a << std::endl;
    } else {
        std::cout << "The bigger number is: " << b << std::endl;
    }


    return 0;
}

// Write a program that asks for two numbers and prints the bigger one