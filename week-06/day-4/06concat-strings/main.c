#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char *concat(char *s1, char *s2);

int main()
{
    char *s = concat("tropical", "fruit");
    printf("%s", s);

    free(s);
    s = NULL;

    return 0;
}

char *concat(char *s1, char *s2)
{
    char *result = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}