//
// Created by Kata on 2019. 05. 15..
//

#ifndef INC_02SANDWICH_SANDWICH_H
#define INC_02SANDWICH_SANDWICH_H

typedef struct {
    char name[30];
    float price;
    float weight;
} sandwich_t;

float price_of_order(sandwich_t sandwich, int order);

#endif //INC_02SANDWICH_SANDWICH_H
