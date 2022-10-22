/**
 * receive linked list
 * count the number of nodes
 * first header basically input and output
 * second header for malloc
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

/**
 * program to count nodes
 *
 */

void count_nodes(struct node *head) {
  int count = 0;
  if (head == NULL)
    printf("linked list is empty");
  struct node *ptr = NULL;
  ptr = head;
  while (ptr != NULL) {
    count++;
    ptr = ptr->link;
  }
  printf("%d", count);
}

//int main(void)
//{
//    count_nodes(head);
//}
// create list and call on it with commented function
