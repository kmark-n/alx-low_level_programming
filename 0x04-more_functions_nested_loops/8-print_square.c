#include "main.h"

/**
 * print_square - function that prints a square
 * @size: an int rep the size of a square
 * Return: 0
 */

void print_square(int size)
{
int row, col;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
