#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list and returns the head nodes data(n)
 * @head: pointer to a head pointer
 * Return: int
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
{
return (0);
}
temp = *head;
*head = (*head)->next;
data = temp->n;
free(temp);
return (data);
}
