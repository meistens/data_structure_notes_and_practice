#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * description: algorithm for adding a new list
 * to a singly linked list
 *
 */

void insert_end(Node **root, int value) {
  Node *current = *root;
  Node *new_node = malloc(sizeof(Node));
  new_node->next = NULL;

  if (new_node == NULL) {
    exit(1);
  }

  new_node->next = NULL;
  new_node->data = value;

  while (current->next != NULL) {
    current = current->next;
  }

  current->next = new_node;
}

/**
 * description: improved way of adding elements
 * to a linked list
 */

int main(int argc, char *argv[]) {
  Node *root = malloc(sizeof(Node));
  Node *current = root;
  if (root == NULL) {
    exit(2);
  }
  root->data = 100;
  root->next = NULL;

  insert_end(&root, 200);

  while (current != NULL) {
    printf("%d\n", current->data);
    current = current->next;
  }
}
