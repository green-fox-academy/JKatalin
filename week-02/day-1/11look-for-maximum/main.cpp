#include <iostream>

int *maximum(int size, int array[]);

int main() {
    int size;
    std::cout << "Please enter the size of the array: " << std::endl;
    std::cin >> size;

    int array[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> array[i];
    }
    int *max;
    max = maximum(size, array);
    std::cout << "The biggest number in the array: " << *max << std::endl;
    std::cout << "The address of the biggest number in the array: " << max << std::endl;

    return 0;
}

int *maximum(int size, int array[]) {
    int *maxPtr = &array[0];
    for (int i = 0; i < size; i++) {
        if (*maxPtr < array[i]) {
            maxPtr = &array[i];
        }
    }
    return maxPtr;
}


// Create a program which first asks for a number
// this number indicates how many integers we want to store in an array
// and than asks for numbers till the user fills the array
// It should print out the biggest number in the given array and the memory address of it