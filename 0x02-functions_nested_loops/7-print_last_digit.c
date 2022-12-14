# include "main.h"

/**
 *  print_last_digit - Entry point
 *  @n: the int we will use for the argument of the function
 *  Return: an integer value
 */

int print_last_digit(int n)
{
int last;

last = n % 10;

if (last < 0)
{
last = last * (-1);

_putchar(last + '0');
}
return (last);
}
