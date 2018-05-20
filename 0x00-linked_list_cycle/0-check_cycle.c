#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * int check_cycle - check for cycle
 * @listint_t: linked list
 * Description: Checks if linked last has a loop cycle
 * Return: 0 on no cycle, 1 on cycle.
 */
int check_cycle(listint_t *list) {

  if (list == NULL) {
    return 0;
  }

  listint_t *head = list;
  listint_t *node = head->next;

  while(node != NULL) {
    head = head->next;
    if (node->next == NULL) {
      return 0;
    }
    node = node->next->next;
    if (head == node) {
      return 1;
    }

  }
  return 0;
}
