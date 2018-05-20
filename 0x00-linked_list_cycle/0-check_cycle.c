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
  
  char **arr = malloc(sizeof(char*) * 100);
  int m = 0;

  while(list != NULL)
    {

      for(unsigned long int i = 0; i < sizeof(arr); i++) {
	
	if (arr[i] == (void *)list) {
	  return 1;
	}
      }
      arr[m] = (void *)list;
      m++;
      printf("%s", arr[0]);
      list = list->next;
    }
  return 0;
}
