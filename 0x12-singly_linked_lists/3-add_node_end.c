#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end
 * of a list
 * @head: address of a head pointer
 * @str: input string
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *tmp;

node = malloc(sizeof(list_t));
if (node == NULL)
{
return (NULL);
}
node->len = _strlen(str);
node->str = strdup(str);
node->next = NULL;

if (*head == NULL)
{
*head = node;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = node;
}
return (node);
}

/**
 * _strlen - returns the length of a string
 * @s: character of a string
 * Return: length of a string
 */

int _strlen(const char *s)
{
int i;

while (s[i] != 0)
{
i++;
}
return (i);
}
