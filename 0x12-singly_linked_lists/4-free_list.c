#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head - pointer to the head
 * Return: nothing
 */

void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
