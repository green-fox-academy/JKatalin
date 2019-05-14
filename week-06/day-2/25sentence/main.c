#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void split_string(char string[]);

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    gets(string);

    split_string(string);

    return (0);
}

void split_string(char string[])
{
    char *word = strtok(string, " ");

    while (word != NULL) {
        puts(word);
        word = strtok(NULL, " ");
    }
};