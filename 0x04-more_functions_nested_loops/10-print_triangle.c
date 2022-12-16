#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: int rep the size of the triangle
 * if size 0 or less, print new line
 * Return: nothing
 */

void print_triangle(int size)
{
int row, col, aux;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
aux = (size - row) - 1;
if (col < aux)
{
_putchar(' ');
}
else
{
_putchar(35);
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
