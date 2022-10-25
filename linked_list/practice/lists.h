#ifndef _LISTS_
#define _LISTS_


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

#endif
