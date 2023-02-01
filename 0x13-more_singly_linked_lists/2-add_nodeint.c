#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning of a
 * lisint_t list
 * @head: address to a head pointer
 * @n: input data type
 * Return: address of the new element
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
