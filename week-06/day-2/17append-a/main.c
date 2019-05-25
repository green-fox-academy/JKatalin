#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void append_a(char *string);

int main()
{
    char string[20];

    printf("Please enter a word:");
    scanf("%s", string);

    append_a(string);
    printf("%s\n", string);

    append_a(string);
    printf("%s\n", string);

    return 0;
}

void append_a(char *string)
{
    string[strlen(string)] = 'a';
    string[strlen(string) + 1] = '\0';
}

// Create a program which asks for a string and stores it
// Create a function which takes a string as a parameter and
// appends a character 'a' to the end of it and returns the new string