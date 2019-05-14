#include <stdio.h>

int main()
{
    double a_side;
    double b_side = 0;
    double c_side = 0;

    printf("What is the size of side A?\n");
    scanf("%lf", &a_side);

    printf("What is the size of side B?\n");
    scanf("%lf", &b_side);

    printf("What is the size of side C?\n");
    scanf("%lf", &c_side);

    double surface = 2 * a_side * b_side + 2 * a_side * c_side + 2 * b_side * c_side;
    printf("%.2f\n", surface);

    double volume = a_side * b_side * c_side;
    printf("%.2f\n", volume);


    return 0;
}

// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000