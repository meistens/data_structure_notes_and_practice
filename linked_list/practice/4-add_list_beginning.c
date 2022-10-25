#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * description: add a list to the beginning of a node
 */

void insert_beginning(Node **root, int value) {
  Node *new_node = malloc(sizeof(Node));

  if (new_node == NULL) {
    return;
  }
  new_node->data = value;
  new_node->next = *root;

  *root = new_node;
}

/**
 * description: linked list insert at the beginning
 * demo code
 */

void add(Node *root)
{
    Node *print = root;

    while (print != NULL) {
        printf("%d\n", print->data);
        print = print->next;
            }
}


int main(void) {
  Node *root = NULL;
  //  Node *current = root;

  insert_beginning(&root, 1000);
  insert_beginning(&root, 2000);

  // while (current != NULL) {
  // printf("%d\n", current->data);
  // current = current->next;
  // }
  add(root);

  return 0;
}
