/**
 * compile properly using c89 when you get a laptop, for loop
 * not really suppoted
 */


#include <stdio.h>
#include <stdlib.h>

/**
 * description: add to a linked list
 * @x: data of the node
 * @next: address store of the node
 * @Node: node of the linked list
 *
 */

typedef struct Node {
  int data;
  struct Node *next;
} Node;

/**
 * description: insert into a linked list
 *
 *
 *
 */

void insert_end(Node **root, int value) {
  Node *new_node = malloc(sizeof(Node));
  new_node->next = NULL;
  new_node->data = value;

  if (new_node == NULL) {
    exit(1);
  }
  new_node->next = NULL;
  new_node->data = value;

  if (*root == NULL)
      {
          *root = new_node;
          return;
      }


  Node *current = *root;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = new_node;
}

/**
 * description: singly linked list
 * @elem1: linked list
 *
 *
 */

int main(int argc, char *argv[]) {

  Node *elem1 = malloc(sizeof(Node));
  if (elem1 == NULL)
      {
          exit(2);
      }
  elem1->data = 10;
  elem1->next = NULL;

  insert_end(&elem1, 20);
  insert_end(&elem1, 30);


  /* iterating over the list */
  for (Node* current = elem1; current != NULL; current = current->next) {
    printf("%d\n", current->data);
  }

  /* free(elem1->next->next); */
  /* free(elem1->next); */
  return 0;
}
