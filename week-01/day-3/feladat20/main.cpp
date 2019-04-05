#include <iostream>

int main(int argc, char *args[]) {
    int a;
    while (a != 8) {
        std::cout << "Try to find out the number:" << std::endl;
        std::cin >> a;

        if (a == 8) {
            std::cout << "You found the number: 8" << std::endl;
        } else if (a < 8) {
            std::cout << "The stored number is higher" << std::endl;
        } else {
            std::cout << "The stried number is lower" << std::endl;
        }
    }


    return 0;
}

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8