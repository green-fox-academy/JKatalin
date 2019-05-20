//
// Created by Kata on 2019. 05. 20..
//

#include "linkedlist.h"

linked_list_t *create_head()
{
    linked_list_t *head = (linked_list_t *) malloc(sizeof(linked_list_t));
    head->data = 0;
    head->next_element = NULL;
    return head;
}

//Insert at the end
void push_back(linked_list_t *head, int data)
{
    linked_list_t *new_node = (linked_list_t *) malloc(sizeof(linked_list_t));
    new_node->data = data;
    new_node->next_element = NULL;

    linked_list_t *it = head;
    while (it->next_element != NULL) {
        it++;
    }

    it->next_element = new_node;
}


//Insert at the beginning
void push_front(linked_list_t **head, int data)
{
    linked_list_t *new_node = (linked_list_t *) malloc(sizeof(linked_list_t));
    new_node->data = data;
    new_node->next_element = *head;
    *head = new_node;
}


//Insert after
void insert(linked_list_t *head, int data, linked_list_t *point_after)
{
    linked_list_t *new_node = (linked_list_t *) malloc(sizeof(linked_list_t));
    new_node->data = data;
    new_node->next_element = point_after->next_element;
    point_after->next_element = new_node;
}


//Size
int size(linked_list_t *head)
{
    int counter = 0;
    linked_list_t *it = head;
    while (it->next_element != NULL) {
        it = it->next_element;
        counter++;
    }

    return counter + 1;  //because it should count the last element also (if we want to know about the head also)
}

//Empty
int empty(linked_list_t *head)
{
    if (size(head) - 1 == 0) {       //just if the size() include the +1 at the end
        return 1;
    }
    return 0;
}


//Delete from the beginning
linked_list_t *erase_front(linked_list_t *head)
{
    linked_list_t *new_head = head->next_element;
    free(head);
    return new_head;
}


