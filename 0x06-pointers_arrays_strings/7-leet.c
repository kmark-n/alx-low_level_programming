#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @c: pointer to the string
 * Return: char
 */

char *leet(char *c)
{
int i = 0;
int j = 0;
char *s = "aAeEoOlLtT";
char *n = "4433001177";

while (c[i] != '\0')
{
while (*(s + j) != '\0')
{
if (c[i] == *(s + j))
{
c[i] = *(n + j);
}
j++;
}
j = 0;
i++;
}
return (c);
}
