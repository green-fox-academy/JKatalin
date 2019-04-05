#include <iostream>

int main(int argc, char* args[]) {
    int a;
    std::cout << "Please, enter a number:"<<std::endl;
    std::cin >> a;

    int b;
    for (b=1; b<=a; b++ ){
        int c;
        for (c=1; c<=b ; c++){
            std::cout<< "*";
        }
        std::cout<< std::endl;
    }

    return 0;
}

// Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was