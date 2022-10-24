#include <stdio.h>
#include <stdlib.h>

/**
 * description: linked list structure
 * @data: data of the node
 * @next: address store of the node
 *
 */

typedef struct Node {
  int data;
  struct Node *next;
} Node;

/**
 * description: singly linked list demo
 * @elem1: linked list
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[]) {

  Node elem1;
  elem1.data = 1;
  elem1.next = malloc(sizeof(Node));
  elem1.next->data = -2;
  elem1.next->next = malloc(sizeof(Node));
  elem1.next->next->data = 45;
  elem1.next->next->next = NULL;

  /* iterating over the list */
  for (Node *current = &elem1; current != NULL; current = current->next) {
    printf("%d\n", current->data);
  }

  free(elem1.next->next);
  free(elem1.next);
  return 0;
}
