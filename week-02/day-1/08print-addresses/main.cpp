#include <iostream>

int main() {

    int array[5] = {};
    std::cout << "Please enter 5 numbers: " << std::endl;
    std::cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        std::cout << &array[i] << std::endl;
    }

    return 0;
}

// Create a program which accepts five integers from the console (given by the user)
// and store them in an array
// print out the memory addresses of the elements in the array