#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * description:  define a structure for linked list elements
 * @ListElem: individual element to a linked list
 * @List: linked list data structure
 *
 */

typedef struct ListElem {
  void *data;
  struct ListElem *next;
} ListElem;

/**
 * description: define a structure for linked lists
 * @size: number of elements in the list
 * @match: member not used by the linked lists but derived later
 * @destroy: encapsulated function passed to list_init
 * @head: pointer to the first of the linked elements
 * @tail: pointer to the tail element
 * @List: linked list data structure
 *
 */

typedef struct List
{
    int size;
    int (*match)(const void *key1, const void *key2);
    void (*destroy)(void *data);
    ListElem *head;
    ListElem *tail;
} List;

/**
 * description: public interface
 * list_init initializes a linked list for use in other operations. O(1) because
 * it runs at a constant time
 *
 * list_destroy destroys a linked list. O(n) because list_rem_next must be
 * called for each function
 *
 * list_ins_next inserts an element into a linked list. 0(1) complexity
 *
 * list_rem_next removes from a linked list the element after a specified
 * element. 0(1) complexity
 *
 */

void list_init(List *list, void (*destroy)(void *data));
void list_destroy(List *list);
int list_ins_next(List *list, ListElem *element, const void *data);
int list_rem_next(List *list, ListElem *element, void **data);

/**
 * macros
 *
 */

#define list_size(list) ((list)->size)
#define list_head(list) ((list)->head)
#define list_tail(list) ((list)->tail)
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)
#define list_is_tail(element) ((element)->next == NULL ? 1 : 0)
#define list_data(element) ((element)->data)
#define list_next(element) ((element)->next)

#endif
