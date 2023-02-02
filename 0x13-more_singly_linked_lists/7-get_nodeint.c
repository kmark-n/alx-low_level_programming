#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth
 * node of a listint_t list
 * @head: head pointer
 * @index: index of the node, starting at 0
 * Return: nth node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i = 0;

temp = head;

while (i < index && temp != NULL)
{
temp = temp->next;
i++;
}
if (i != index)
{
return (NULL);
}
return (temp);
}
