#include <stdio.h>
#include <string.h>

int lenght_string1(char name[]);
int lenght_string2(char name[]);

int main()
{
    char name[30];
    printf("What is your name?");
    scanf("%s", name);

    printf("%d\n", lenght_string1(name));

    printf("%d\n", lenght_string2(name));

    return 0;
}

int lenght_string1(char name[])
{
    int counter = 0;
    while(*name != NULL){
        counter++;
        name++;
    }
    return counter;
}

int lenght_string2(char name[])
{
    return strlen(name);
}


// Create a program which asks for the name of the user and stroes it
// Create a function which takes a string as a parameter and returns the lenght of it
// Solve this exercie with and without using string.h functions