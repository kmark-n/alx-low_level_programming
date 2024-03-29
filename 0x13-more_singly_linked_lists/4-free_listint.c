#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to a head
 * Return: nothing
 */

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
