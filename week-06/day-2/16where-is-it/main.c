#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int where_is_it(char string[], char character[]);


int main()
{
    char string[20];
    char character[2];

    printf("Write a word, please:");
    scanf("%s", string);

    printf("Write a character, please:");
    scanf("%s", character);

    int index = where_is_it(string, character);

    if (index == -1) {
        printf("Your character is not in your word.");
    } else {
        printf("Your character is the %d. character in your word.", index);
    }

    return 0;
}

int where_is_it(char string[], char character[])
{
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == character[0]) {
            return i + 1;
        }
    }
    return -1;
}
// Create a program which asks for a string and a character and stores them
// Create a function which takes a string and a character as a parameter and
// if the given character is in the string, it should return the index of the
// first appearance (in the given string) otherwise the function should return -1
//
// Example:
//
// Case 1:
//
// given_string = "embedded"
// given_char = 'd'
//
// the function should return: 4, because this is the index of the first appearance of char 'd'
//
//
// Case 2:
//
// given_string = "embedded"
// given_char = 'a'
//
// the function should return: -1, because there is no 'a' in the word "embedded"
//