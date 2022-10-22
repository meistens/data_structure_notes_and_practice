#include <stdio.h>
#include <stdlib.h>

/**
 * add node to end of the list
 * @head: points to a singly linked list
 *
 */

struct node {
  int data;
  struct node *link;
};

// int main(void) { add_to_end(head, 5); }

void add_to_end(struct node *head, int data) {
  struct node *ptr, *temp;
  ptr = head;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;

  while (ptr->link != NULL) {
    ptr = ptr->link;
  }
  ptr->link = temp;
}
