#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * list
 * @h: pointer to a head
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
size_t cont = 0;

while (h != NULL)
{
h = h->next;
cont++;
}
return (cont);
}
