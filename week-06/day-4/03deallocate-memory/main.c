#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int *pointer = NULL;
    pointer = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            pointer[i] = i;
        } else {
            pointer[i] = i + 1;
        }
    }

    for (int j = 0; j < 10; j++) {
        printf("%d\n", pointer[j]);
    }

    realloc(pointer, 0);


    for (int j = 0; j < 10; j++) {
        printf("%d\n", pointer[j]);
    }

    return 0;
}