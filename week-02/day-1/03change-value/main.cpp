#include <iostream>

int main() {
    float temperature = 21.3;
    float *temperPtr = &temperature;

    *temperPtr = 22;

    std::cout << temperature << std::endl;

    return 0;
}


// Change the value of the variable called 'temperature' using a pointer
// (you have to create the pointer first)
