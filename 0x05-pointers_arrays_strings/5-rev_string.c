#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
int i = 0;
int aux = 0;
char temp;

while (s[i] != '\0')
{
i++;
}
i--;
while (aux < i)
{
temp = s[i];
s[i] = s[aux];
s[aux] = temp;
aux++;
i--;
}
}
