#include <iostream>

int main() {
    int age = 31;
    int *agePtr = &age;

    std::cout << "The value of variable is: " << *agePtr << std::endl;

    return 0;
}


// Print out the value of the variable called 'age' using a pointer
// (you have to create the pointer first)
