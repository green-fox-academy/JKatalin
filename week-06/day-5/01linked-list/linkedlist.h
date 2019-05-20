//
// Created by Kata on 2019. 05. 20..
//

#ifndef INC_01LINKED_LIST_LINKEDLIST_H
#define INC_01LINKED_LIST_LINKEDLIST_H

#include <stdlib.h>

typedef struct linked_list {
    int data;
    struct linked_list *next_element;
} linked_list_t;

linked_list_t *create_head();

void push_back(linked_list_t *head, int data);

void push_front(linked_list_t **head, int data);

void insert(linked_list_t *head, int data, linked_list_t *point_after);

int size(linked_list_t *head);

int empty(linked_list_t *head);

linked_list_t *erase_front(linked_list_t *head);


#endif //INC_01LINKED_LIST_LINKEDLIST_H
