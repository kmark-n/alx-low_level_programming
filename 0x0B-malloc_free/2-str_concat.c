#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: input char 1
 * @s2: input char 2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
char *cat;
char *nul = "";
unsigned int i, j, x, y;
i = j = x = y = 0;
if (s1 == NULL)
{
s1 = nul;
}
if (s2 == NULL)
{
s2 = nul;
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
j++;
cat = malloc((i + j) *sizeof(*cat));
if (cat == NULL)
{
return (NULL);
}
while (s1[x] != '\0')
{
cat[x] = s1[x];
x++;
}
while (s2[y] != '\0')
{
cat[x] = s2[y];
y++;
x++;
}
cat[x] = '\0';
return (cat);
}
