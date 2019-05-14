#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    char name[] = "Katalin Diana";
    printf("%s\n", name);

    int age = 32;
    printf("%d\n", age);

    float height = 1.65;
    printf("%.2f\n", height);

    printf("My name is %s, I am %d years old, and I am %.2f meter tall.", name, age, height);

    return 0;
}


// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Your height in meters (as a decimal fraction)
//
//  Use variables to store the informations!