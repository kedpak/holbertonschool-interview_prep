#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_node - insert node in sorted linked list
 * @head: node struct
 * @number: int data
 * Return: new list
 */
listint_t *insert_node(listint_t **head, int number)
{
  listint_t *temp;
  listint_t *new_node;

  temp = *head;
  new_node = malloc(sizeof(listint_t));
  new_node->n = number;

  if (*head == NULL)
  {
    new_node->next = NULL;
    *head = new_node;
    return (new_node);
  }

  if (*head != NULL && (*head)->n > number)
  {
    new_node->next = *head;
    *head = new_node;
    return (new_node);
  }

  while (temp->next != NULL && temp->next->n < number)
  {
    temp = temp->next;
  }
  new_node->next = temp->next;
  temp->next = new_node;
  return (new_node);
}
