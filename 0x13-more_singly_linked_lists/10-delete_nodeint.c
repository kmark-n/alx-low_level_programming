#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at index
 * of a linked list
 * @head: pointer to a head pointer
 * index: node to be deleted
 * Return: 1 if it succeeded and -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *removenode;
unsigned int i;

i = 0;
temp = *head;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(temp);
}
else
{
while (i < index - 1)
{
temp = temp ->next;
if (temp == NULL)
{
return (-1);
}
i++;
}
removenode = temp;
removenode = removenode->next;
temp->next = removenode->next;
free(removenode);
}
return (1);
}
