#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of
 * a list
 * @head: pointer to address of a header
 * @str: input string value
 * Return: address of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->len = _strlen(str);
new_node->str = strdup(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}

/**
 * _strlen - return length of a string
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
