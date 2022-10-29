#ifndef _LISTS_
#define _LISTS_

/**
 * description: linked list node
 * @data: data of a node
 * @next: address store of a node
 *
 */

#include <stdio.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

/**
 * description: program prints a linked list
 * when invoked
 *
 */

void printList(struct Node *n) {
  while (n != NULL) {
    printf("%d", n->data);
    n = n->next;
  }
}

#endif
