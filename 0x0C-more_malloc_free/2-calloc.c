#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: input size 1
 * @size: input size bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *call;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
call = malloc(nmemb * size);
if (call == NULL)
{
return (NULL);
}
_memset(call, 0, nmemb * size);
return (call);
}
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
