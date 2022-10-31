#include "./algorithms/deletions.h"
#include "./algorithms/insertions.h"
#include "./algorithms/lists.h"
#include <stdlib.h>

/**
 * description: delete node from linked list test
 * Return: 0
 *
 */

int main(void) {
  /* uncomment if you want list to have 0 as null */
  /* struct Node* list = malloc(sizeof(Node)); */
  /* list->next = NULL; */
  struct Node *list = NULL;
  newHead(&list, 1);
  newHead(&list, 2);
  newHead(&list, 3);
  printList(list);

  /*     delNode(&list, 1); */
  /*     printList(list); */
  /*     return 0; */

  delDynamic(&list, 2);
  printList(list);
  return 0;
}
