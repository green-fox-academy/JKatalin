#include <iostream>

int main(int argc, char *args[]) {

    int a, b, c, d, e;
    std::cout << "Please enter 5 numbers: " << std::endl;
    std::cin >> a>> b>> c>> d>> e;

    // std::cout << a << b << c << d << e << std::endl;

    std::cout << "Sum: " << a + b + c + d + e << ", Average: " << (a + b + c + d + e) / 5 << std::endl;


    return 0;
}


// Write a program that asks for 5 integers in a row,
// then it should print the sum and the average of these numbers like:
//
// Sum: 22, Average: 4.4