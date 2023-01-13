# include "main.h"

/**
 * _islower - Entry point
 * checks for lowercase
 * @c: The character to check
 * Return: 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
