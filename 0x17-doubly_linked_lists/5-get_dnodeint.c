#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: input header pointer
 * @index: ndex of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
