#include <iostream>

int index(int array[], int size, int lnum);

int main() {
    int size = 5;
    int array[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> array[i];
    }

    int lookingnum;
    std::cout << "Please enter which number would you like to find: " << std::endl;
    std::cin >> lookingnum;

    std::cout << "The array is contain 2 on the following index place: " << index(array, size, lookingnum) << std::endl;


    return 0;
}

int index(int array[], int size, int lnum) {
    int num = lnum;
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            return i;
        }
    }
    return -1;
}


// Create a function which takes an array (and it's lenght) and a number as a parameter
// the function should return index where it found the given value
// if it can't find the number return -1