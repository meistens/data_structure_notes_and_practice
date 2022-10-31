#include "lists.h"
#include <stdlib.h>

/**
 * description: delete a node from a list
 * @temp: node to replace deleted node
 * @prev: previous node
 *
 */
void delNode(Node **head, int pos) {
  int i;
  Node *temp;
  Node *prev;
  temp = *head;
  prev = *head;
  for (i = 0; i < pos; i++) {
    if (i == 0 && pos == 1) {
      *head = (*head)->next;
      free(temp);
    } else {
      if (i == pos - 1 && temp) {
        prev->next = temp->next;
        free(temp);
      } else {
        prev = temp;
        if (prev == NULL)
          break;
        temp = temp->next;
      }
    }
  }
}

/**
 * description: delete a node dynamically
 *
 */

void delDynamic(struct Node **head, int rand) {
  struct Node *temp;

  if ((*head)->data == rand) {
    temp = *head;
    *head = (*head)->next;
    free(temp);
  } else {
    struct Node *current = *head;
    while (current->next != NULL) {
      if (current->next->data == rand) {
        temp = current->next;
        /* node discontinued */
        current->next = current->next->next;
        free(temp);
        break;
      } else {
        current = current->next;
      }
    }
  }
}
