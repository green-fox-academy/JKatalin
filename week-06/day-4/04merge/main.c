#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int *pointer_even = NULL;
    pointer_even = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        pointer_even[i] = 2 * i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", pointer_even[i]);
    }
    printf("---------------\n");

    int *pointer_odd = NULL;
    pointer_odd = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        pointer_odd[i] = 2 * i + 1;
    }

    pointer_even = (int *)realloc(pointer_even, 20 * sizeof(int));

    int index = 0;
    for (int i = 10; i < 20; i++) {
        pointer_even[i] = pointer_odd[index];
        index++;
    }

    free(pointer_odd);
    pointer_odd = NULL;

    for (int i = 19; i >= 0; i--) {
        printf("%d\n", pointer_even[i]);
    }

   /* for (int i = 0; i < 10; i++) {
        printf("%d\n", pointer_odd[i]);
    }*/

    free(pointer_even);
    pointer_even = NULL;

    return 0;
}