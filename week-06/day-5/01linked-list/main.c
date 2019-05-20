#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


int main()
{
    /*linked_list_t *head = (linked_list_t *)malloc(sizeof(linked_list_t));
    head->data = 0;
    head->next_element = NULL; */

    linked_list_t *head = create_head();

    printf("%d\n", head->data);

    push_back(head, 1);
    printf("%d\n", head->next_element->data);

    push_back(head, 5);
    printf("%d\n", head->next_element->next_element->data);

    printf("----------------------------\n");

    push_front(&head, 15);
    printf("%d\n", head->data);
    printf("%d\n", head->next_element->data);
    printf("%d\n", head->next_element->next_element->data);

    printf("----------------------------\n");

    insert(head, 22, head->next_element);
    printf("%d\n", head->data);
    printf("%d\n", head->next_element->data);
    printf("%d\n", head->next_element->next_element->data);
    printf("%d\n", head->next_element->next_element->next_element->data);
    printf("%d\n", head->next_element->next_element->next_element->next_element->data);

    printf("----------------------------\n");

    printf("%d\n", size(head));
    printf("%d\n", empty(head));

    printf("----------------------------\n");

    head = erase_front(head);
    printf("%d\n", head->data);
    printf("%d\n", head->next_element->data);


    return 0;
}


