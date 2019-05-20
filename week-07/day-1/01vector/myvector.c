//
// Created by Kata on 2019. 05. 20..
//

#include "myvector.h"

//Create vector
vector_t create_vector(int input_array[], int size)
{
    vector_t vector;
    vector.size = size;
    vector.capacity = size * 2;
    vector.content = (int*)malloc(vector.capacity * sizeof(int));
    memcpy(vector.content, input_array, size* sizeof(int));      //we need + 1?

    return vector;
}

void print_vector(vector_t vector)
{
    printf("Size of vector is: %d, Capacity of vector is: %d\n", vector.size, vector.capacity);
    for(int i = 0; i < vector.size; i++){
        printf("%d, ", vector.content[i]);
    }
    printf("\n");
}

//Insert at the end
void push_back(vector_t *vector, int value)
{
    vector->size++;
    if(vector->size > vector->capacity){
        vector->capacity = vector->capacity * 2;
        vector->content = (int *)realloc(vector->content, vector->capacity * sizeof(int));
    }

    vector->content[vector->size - 1] = value;
}