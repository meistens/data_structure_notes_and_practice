/**
 * description: program to create a linked list
 * from scratch
 * @first: head of the first node
 * @second: second node
 * @third: third node
 * @fourth: fourth node
 * @fifth: fifth node
 * Return: 0
 *
 */

#include "./algorithms/lists.h"
#include <stdlib.h>

int main(void) {

  struct Node *first = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;
  struct Node *fourth = NULL;
  struct Node *fifth = NULL;

  /* dynamically allocate the nodes in the heap */
  first = (struct Node *)malloc(sizeof(Node));
  second = (struct Node *)malloc(sizeof(Node));
  third = (struct Node *)malloc(sizeof(Node));
  fourth = (struct Node *)malloc(sizeof(Node));
  fifth = (struct Node *)malloc(sizeof(Node));

  /* assign data in first node
   * link first node with the second
   * repeat till satisfied, last node returns NULL
   * to terminate the list
   */
  first->data = 1;
  first->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = fourth;

  fourth->data = 4;
  fourth->next = fifth;

  fifth->data = 5;
  fifth->next = NULL;


  /* invoke printList */
  printList(first);

  return 0;
}
