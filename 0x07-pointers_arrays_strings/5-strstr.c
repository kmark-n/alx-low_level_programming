#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring
 * @needle: substring
 * @haystack: the initial string
 * Return: char
 */


char *_strstr(char *haystack, char *needle)
{
char *res;
char *aux;

while (*haystack != '\0')
{
res = haystack;
aux = needle;
while (*aux == *haystack && *aux != '\0' && *haystack != '\0')
{
haystack++;
aux++;
}
if (*aux == '\0')
{
return (res);
}
haystack++;
}
return (NULL);
}
