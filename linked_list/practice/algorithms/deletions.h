#include "lists.h"

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
