#include <stdio.h>
#include <string.h>

// print out the characters that corresponds to these ascii values
void print_array(int array[], int size);

int main()
{
    int array[] = {103, 114, 101, 101, 110, 32, 102, 111, 120};
    int size = sizeof(array) / sizeof(int);

    print_array(array, size);

    return 0;
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%c", array[i]);
    }
}