#include "./algorithms/insertions.h"
#include "./algorithms/lists.h"

/**
 * description: program to test the insertion
 * algorithm
 * Return: 0
 *
 */
int main(void) {
  /* create empty list
   * add a list
   * add a list to the beginning of the list
   * add a list to the end of the list
   * dynamically add a list after a point in the list
   *
   */

  struct Node *head = NULL;

  insertEnd(&head, 10);
  newHead(&head, 20);
  newHead(&head, 30);
  insertEnd(&head, 40);
  insertAfter(head->next, 50);

  printList(head);
  return 0;
}
