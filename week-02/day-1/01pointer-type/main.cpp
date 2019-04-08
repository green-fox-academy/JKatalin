#include <iostream>

int main() {

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPtr = &a;
    double *bPtr = &b;
    std::string *namePtr = &name;

    std::cout << "The address of variable a is: " << &a << std::endl;
    std::cout << "The value of variable a is: " << *aPtr << std::endl;

    std::cout << "The address of variable b is: " << &b << std::endl;
    std::cout << "The value of variable b is: " << *bPtr << std::endl;

    std::cout << "The address of variable name is: " << &name << std::endl;
    std::cout << "The value of variable name is: " << *namePtr << std::endl;

    return 0;
}


// Create a pointer for each variable and print out the memory addresses of that variables
// Print out the values of the pointers