#include "./algorithms/lists.h"
#include "./algorithms/insertions.h"
#include "./algorithms/deletions.h"
#include <stdlib.h>

/**
 * description: delete node from linked list test
 * Return: 0
 *
 */

int main(void){
    Node* list = malloc(sizeof(Node));
    list->next = NULL;
    newHead(&list, 100);
    newHead(&list, 200);
    newHead(&list, 300);

    printList(list);

    delNode(&list, 1);
    printList(list);
    return 0;
}
