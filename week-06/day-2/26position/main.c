#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void i_positions(char array[]);

int main()
{
    char string[55] = "This is a string for testing";
    //char *p;
    i_positions(string);

    return 0;
}

void i_positions(char array[])
{
    for (int i = 0; i < strlen(array); i++) {
        if (array[i] == 'i') {
            printf("%d\n", i);
        }
    }
}