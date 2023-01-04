#include "main.h"
#include <stddef.h>

/**
 * *_strchr - function that locates a character in a string
 * @c: character to trace
 * @s: pointer to a string of characters
 * Return: char
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
s++;
}
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
