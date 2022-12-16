#include "main.h"

/**
 *more_numbers - prints 10 times numbers
 *from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
char x, y;
int i = 0;

while (i < 10)
{
for (x = 0; x <= 14; x++)
{
y = x;
if (x > 9)
{
_putchar('1');
y = x % 10;
}
_putchar(y + '0');
}
_putchar('\n');
i++;
}
}
