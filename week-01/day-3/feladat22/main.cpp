#include <iostream>

int main(int argc, char *args[]) {
    int a = 8;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if ((i + j) % 2 == 0) {
                std::cout << "%";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }


    return 0;
}

// Crate a program that draws a chess table like this
//
// % % % %
//  % % % %
// % % % %
//  % % % %
// % % % %
//  % % % %
// % % % %
//  % % % %