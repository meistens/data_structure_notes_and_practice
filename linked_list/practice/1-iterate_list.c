#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * description: singly linked list
 */

int main(int argc, char *argv[]) {
  Node root;
  root.data = 10;
  root.next = malloc(sizeof(Node));
  root.next->data = 20;
  root.next->next = malloc(sizeof(Node));
  root.next->next->data = 30;
  root.next->next->next = NULL;

  /* iterate over the created nodes above then print the
   * results
   *
   * while loop used, compiling with c89 for loop
   * is not supported
   */
  Node *current = &root;
  while (current != NULL) {
    printf("%d\n", current->data);
    current = current->next;
  }

  free(root.next->next);
  free(root.next);
  return 0;
}
