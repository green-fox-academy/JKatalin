#include <iostream>

int main(int argc, char *args[]) {

    int c;
    std::cout << "Enter the numbers of chikens: " << std::endl;
    std::cin >> c;

    int p;
    std::cout << "Enter the numbers of pigs: " << std::endl;
    std::cin >> p;

    std::cout << "The number of animals's legs on the farm is: " << c * 2 + p * 4 << std::endl;

    
    return 0;
}


// Write a program that asks for two integers
// The first represents the number of chickens the farmer has
// The second represents the number of pigs owned by the farmer
// It should print how many legs all the animals have