#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data(n)
 * of a listint_t linked list
 * @head: head pointer
 * Return: sum of all the data(n)
 */

int sum_listint(listint_t *head)
{
int sum;
listint_t *temp;

if (head == NULL)
{
return (0);
}
sum = 0;
temp = head;

while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
