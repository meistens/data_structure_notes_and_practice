#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * description: removes from a linked list
 *
 * Return: -1, then 0
 * Time complexity: 0(1)
 */

int list_rem_next(List *list, ListElem *element, void **data)
{
  ListElem *old_elem;

  // prevent removal from an empty list
  if (list_size(list) == 0)
    return -1;

  // remove element from the list
  if (element == NULL) {
      // handle removal from head of list
      *data = list->head->data;
      old_elem = list->head;
      list->head = list->head->next;

      if (list_size(list) == 1)
          list->tail = NULL;
  }
  else {
      // handle removal elsewhere other than head
      if (element->next == NULL)
          return -1;

      *data = element->next->data;
      old_elem = element->next;
      element->next = element->next->next;

      if (element->next == NULL)
          list->tail = element;
  }
  // free storage allocated by the abstrat datatype
  free(old_elem);

  // adjust size of the list to account for removed element
  list->size--;
  return 0;
}
