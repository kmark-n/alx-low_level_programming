#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node at the end of
 * a listint_t list
 * @head: address of a head pointer
 * @n: input data type
 * Return: address of new element or NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *tmp;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
tmp->next = newNode;
}
}
return (newNode);
}
