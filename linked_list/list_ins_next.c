#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * description: insert an element to the list after a specified element
 *
 * Return: -1
 * Time complexity: O(1)
 */

int list_ins_next(List *list, ListElem *element, const void *data) {
  ListElem *new_elem;

  // allocate storage for element
  if ((new_elem = (ListElem *)malloc(sizeof(ListElem))) == NULL)
    return -1;

  // insert element into the list
  new_elem->data = (void *)data;

  if (element == NULL) {
    // handle insertion at head of the list
    if (list_size(list) == 0)
      list->tail = new_elem;

    new_elem->next = list->head;
    list->head = new_elem;
  } else {
    // handle insertion elsewhere other than the head
    if (element->next == NULL)
      list->tail = new_elem;

    new_elem->next = element->next;
    element->next = new_elem;
  }
  list->size++;
  return 0;
}
