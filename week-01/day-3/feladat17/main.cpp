#include <iostream>

int main(int argc, char *args[]) {
    int a = 0;
    while (a < 100) {

        if (a % 3 == 0 && a % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        } else if (a % 5 == 0) {
            std::cout << "Buzz" << std::endl;

        } else if (a % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else {
            std::cout << a << std::endl;
        }
        a++;
    }


    return 0;
}

// Write a program that prints the numbers from 1 to 100.
// But for multiples of three print “Fizz” instead of the number
// and for the multiples of five print “Buzz”.
// For numbers which are multiples of both three and five print “FizzBuzz”.