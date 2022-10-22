#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * description: destroy a linked list
 * @list: linked list
 * @data: node of list
 *
 * Return: 0
 * TIme complexity: O(1)
 */

void list_destroy(List *list) {
  void *data;

  while (list_size(list) > 0) {
    if (list_rem_next(list, NULL, (void **)&data) == 0 &&
        list->destroy != NULL) {
      // call a user-defined function to dynamically allocate memory
      list->destroy(data);
    }
  }
  // no operations allowed but clear the structure as a precaution
  memset(list, 0, sizeof(List));
  return;
}
