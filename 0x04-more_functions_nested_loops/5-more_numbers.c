#include "main.h"

/**
 * void more_numbers(void) - prints 10 times numbers
 * @x: character assigned to an integer
 * @y: character assigned to an integer
 * Return: 0
 */

void more_numbers(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
}
