#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: input value to check
 *Return: 0
 */

void print_line(int n)
{
int i = 0;

while (i < n)
{
if (n > 0)
{
_putchar(95);
i++;
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
