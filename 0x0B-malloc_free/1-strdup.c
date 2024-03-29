#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: input character
 * Return: char
 */

char *_strdup(char *str)
{
char *dup;
unsigned int i = 0;
unsigned int j = 0;

if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
i++;
dup = malloc(i *sizeof(*dup));
if (dup == NULL)
{
return (NULL);
}
while (j < i)
{
dup[j] = str[j];
j++;
}
return (dup);
}
