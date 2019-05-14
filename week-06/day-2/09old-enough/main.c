#include <stdio.h>

int old_enough(int age);

int main()
{
    int age;
    printf("How old are you?");
    scanf("%d", &age);

    if (old_enough(age)) {
        printf("You are enough old to buy alcohol.");
    } else {
        printf("You are not enough old to buy alcohol.");
    }

    return 0;
}

int old_enough(int age)
{
    if (age < 18) {
        return 0;
    } else {
        return 1;
    }
}

// Create a program which asks for the age of the user and stores it
// Create a function which takes that age as a parameter and returns if the user is
// old enough to buy himself alcohol in Hungary
