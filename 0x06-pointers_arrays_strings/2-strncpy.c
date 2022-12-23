#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to char destination
 * @src: pointer to char source
 * @n: number of bytes
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i != n)
{
dest[i++] = '\0';
}
return (dset);
}
