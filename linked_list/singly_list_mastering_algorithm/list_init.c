#include "lists.h"
#include <stdlib.h>

/**
 * description: initializes a linked list
 * @list: linked list data structure
 * @destroy: function passed to list_init
 *
 * Return: 0
 * Time complexity: O(1)
 */

void list_init(List *list, void (*destroy)(void *))
{
    list->size = 0;
    list->destroy = destroy;
    list->head = NULL;
    list->tail = NULL;

    return;
}

// must be present in one of the source files to avoid winMain error
int main(){

}
