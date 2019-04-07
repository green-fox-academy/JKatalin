#include <iostream>

int main(int argc, char* args[]) {

    double a = 6;
    double b = 5.5;
    double c = 1.78;

    int surfaceArea;
    int volume;

    surfaceArea = a * b * c;
    volume = 2* (a * b + a * c + b * c);

    std::cout << "Surface Area: " << surfaceArea << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}


    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000