#include "main.h"

/**
 * print_numbers - function that prints numbers
 * from 0 t0 9
 * Return: 0
 */

void print_numbers(void)
{
char n = 0;
while (n <= 9)
{
_putchar('0' + n);
n++;

}
_putchar('\n');
}
