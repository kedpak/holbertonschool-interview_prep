#include "lists.h"


/**
 * check_cycle - check for cycle
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

    if (node->next == NULL) {
      return 0;
    }
    node = node->next->next;
    if (head == node) {
      return 1;
    }
    head = head->next;
  }
  return 0;
}
