#include "lists.h"
#include <stdlib.h>

/**
 * description: deallocate a list
 */

void deallocate(Node **root) {
  Node *current = *root;
  while (current != NULL) {
    Node *aux = current;
    current = current->next;
    free(aux);
  }
  *root = NULL;
}

/**
 * description: linked list deallocation demo
 */

int main(int argc, char* argv[])
{
    Node* root = NULL;

    deallocate(&root);
    return 0;
}
