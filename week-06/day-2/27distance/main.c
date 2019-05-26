#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int distance_s(char str[]);

int main()
{
    char str[] = "This is a sample string";
    //char *first, *last;

    printf("%d\n", distance_s(str));

    return 0;
}

int distance_s(char str[])
{
    int first_position;
    int index = 0;
    int last_position;
    while (str[index] != 's') {
        index++;
        first_position = index;
    }
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 's') {
            last_position = i;
        }
    }
    return last_position - first_position - 1;
}