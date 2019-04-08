#include <iostream>

int main() {
    int size = 5;
    int array[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> array[i];
    }
    for (int i = 0; i < size; i++) {
        int *arrayPtr = &array[i];
        std::cout << arrayPtr << std::endl;
        // std::cout << &array[i] << std::endl;
    }

    return 0;
}

// Create a program which accepts five integers from the console (given by the user)
// and store them in an array
// print out the values of that array using pointers again