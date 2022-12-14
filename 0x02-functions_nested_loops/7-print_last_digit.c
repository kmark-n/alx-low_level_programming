# include "main.h"

/**
 *  print_last_digit - Entry point
 * @x: The input number to check
 *  Return: int
 */

int print_last_digit(int x)
{
x = x % 10;

if (x < 0)
x = x * (-1);

_putchar(x + '0');

return (x);
}
