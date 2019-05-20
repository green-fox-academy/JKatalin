//
// Created by Kata on 2019. 05. 20..
//

#ifndef INC_01VECTOR_VECTOR_H
#define INC_01VECTOR_VECTOR_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct {
    int *content;
    int size;
    int capacity;
} vector_t;

vector_t create_vector(int vector[], int size);

void print_vector(vector_t vector);

void push_back(vector_t *vector, int value);


#endif //INC_01VECTOR_VECTOR_H
