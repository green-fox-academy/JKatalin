#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list{
    int data;
    struct linked_list *next_element;
} linked_list_t;

void push_back(linked_list_t *head, int data);

int main()
{
    linked_list_t *head = (linked_list_t *)malloc(sizeof(linked_list_t));
    head->data = 0;
    head->next_element = NULL;

    push_back(head, 1);
    printf("%d\n", head->next_element->data);

    push_back(head, 5);
    printf("%d\n", head->next_element->next_element->data);

    return 0;
}


//Insert at the end
void push_back(linked_list_t *head, int data)
{
    linked_list_t *new_node = (linked_list_t *)malloc(sizeof(linked_list_t));
    new_node->data = data;
    new_node->next_element = NULL;

    linked_list_t *it = head;
    while (it->next_element != NULL){
        it++;
    }

    it->next_element = new_node;
}