#include "lists.h"


/**
 * check_cycle - check for cycle
 * @list: linked list
 * Description: Checks if linked last has a loop cycle
 * Return: 0 on no cycle, 1 on cycle.
 */
int check_cycle(listint_t *list)
{

  if (list == NULL)
    return (0);

  listint_t *head = list;
  listint_t *node = list;

  while (node != NULL && node->next != NULL)
    {
      head = head->next;
      node = node->next->next;
      if (head == node)
	return (1);
    }
  return (0);
}
