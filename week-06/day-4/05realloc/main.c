#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int *pointer = NULL;
    printf("Enter the size of array:");
    int size;
    scanf("%d", &size);

    pointer = (int *) malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        int x;
        printf("Give me a number:");
        scanf("%d", &x);
        pointer[i] = x;
    }

    int amount = 0;
    for (int j = 0; j < size; j++) {
        amount = amount + pointer[j];
    }

    int *pointer_y;
    pointer_y = (int *) malloc(amount * sizeof(int));

    for (int i = 0; i < amount; i++) {
        pointer_y[i] = i + 1;
        printf("%d\n", pointer_y[i]);
    }

    free(pointer);
    pointer = NULL;

    free(pointer_y);
    pointer_y = NULL;


    return 0;
}