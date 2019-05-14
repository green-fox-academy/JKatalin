#include <stdio.h>
#include <string.h>

int same_string(char string1[], char string2[]);

int main()
{
    char string1[10];
    char string2[10];

    printf("Write the first word:");
    scanf("%s", string1);

    printf("Write the second word:");
    scanf("%s", string2);

    if (same_string(string1, string2)) {
        printf("The two words are same.");
    } else {
        printf("The two words are different.");
    }

    printf("%s\n", string1);
    printf("%s", string2);

    return 0;
}

int same_string(char string1[], char string2[])
{
    if (strlen(string1) == strlen(string2)) {
        for (int i = 0; i < strlen(string1); i++) {
            if (string1[i] != string2[i]) {
                return 0;
            }
            return 1;
        }
    }
    return 0;
}


// Create a program which asks for two strings and stores them
// Create a function which takes two strings as parameters and
// returns 1 if the two strings are the same and 0 otherwise
// Try to erase small and uppercase sensitivity.