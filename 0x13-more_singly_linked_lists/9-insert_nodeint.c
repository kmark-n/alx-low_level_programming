#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *  *insert_nodeint_at_index - function that inserts a new node at
 *  a given position
 *  @head: pointer to a head pointer
 *  @idx: index list where new node should be added
 *  @n: input integer
 *  Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *temp;
unsigned int i;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;

temp = *head;
i = 0;

if (*head == NULL && idx > 0)
{
free(new_node);
return (NULL);
}
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while (i < idx - 1)
{
temp = temp->next;
if (temp == NULL && idx - i > 0)
{
free(new_node);
return (NULL);
}
i++;
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
