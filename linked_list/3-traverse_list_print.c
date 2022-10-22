/**
 * traverse and prints out the output
 * of a linked list
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

//int main(void) { print_data(head); }

void print_data(struct node *head)
{
    if(head == NULL)
        printf("linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->link;
        }
}
