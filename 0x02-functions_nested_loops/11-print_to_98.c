# include <stdio.h>
# include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: character assigned to an integer
 * Return: 0
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98");
putchar('\n');
}
