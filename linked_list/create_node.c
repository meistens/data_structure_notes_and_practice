#include <stdio.h>
#include <stdlib.h>

/**
 * node is the linked list as a whole, containing
 * the head (data) and tail (link or null if
 * no address)
 * Return: 1
 */

struct node {
  int data;
  struct node *link;
};

int main(void) {
  struct node *head = NULL;
  head = (struct node *)malloc(sizeof(struct node));
  head->data = 1;
  head->link = NULL;

  printf("%d", head->data);
  return 0;
}
