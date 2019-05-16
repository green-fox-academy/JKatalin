#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char *repeat_string(const char *string, int num);

int main()
{
    char *word = repeat_string("Tropical", 5);
    printf("%s", word);

    free(word);
    word = NULL;

    return 0;
}

char *repeat_string(const char *string, int num)
{
    char *result = (char *) malloc(num * strlen(string) + 1);

    strcpy(result, string);
    for (int i = 0; i < num - 1; i++) {
        strcat(result, string);
    }

    return result;
}