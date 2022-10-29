/**
 * description: add a list at the front of a list
 * in that it becomes the head
 * @old_head: existing head of a node
 * @new_head: new node to replace the existing head
 * Return: new node as thd head
 *
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

void newHead(struct Node **old_head, int new_head) {
  /* allocate node to new_node
   * insert the data to the node
   * point the new node to the head node
   * point the old node to the new node
   */

  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

  new_node->data = new_head;

  new_node->next = (*old_head);

  (*old_head) = new_node;
}

/**
 * description: add a node after an existing node
 * in this case, it is placed where the third node
 * used to be
 * @pre_node: previous node of a list
 * @new_data: new node to add to list
 *
 */

void insertAfter(struct Node *pre_node, int new_data) {
  /* allocate node to the new node
   * check if previous node at the end of the
   * list is null
   * insert the data to the new node
   * point the new node to the previous
   * node address
   * point the old node address to the new node
   *
   */

  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

  if (pre_node == NULL) {
    printf("the last node cannot be NULL!");
    return;
  }

  new_node->data = new_data;

  new_node->next = pre_node->next;

  pre_node->next = new_node;
}

/**
 * description: add a node at the end
 * of an existing node
 * @head: previous node at the end of a list
 * @new_node: new node to be inserted
 */

void insertEnd(struct Node **head, int new_node) {
  /* allocate node
   * add the data
   make new node address NULL since it is the last
   * if the list is empty/no node, make
   * the new node as the head
   * else, traverse till NULL
   * change the next of the last node
   *
   */

  struct Node *new_data = (struct Node *)malloc(sizeof(struct Node));

  struct Node *last_node = *head;

  new_data->data = new_node;

  new_data->next = NULL;

  if (*head == NULL) {
    *head = new_data;
    return;
  }

  while (last_node->next != NULL) {
    last_node = last_node->next;
  }
  last_node->next = new_data;
  return;
}
