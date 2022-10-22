#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(void)
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    // easier way of pointing to a new link
    // in a node
    head->link->link = current;
    
    return 0;
}