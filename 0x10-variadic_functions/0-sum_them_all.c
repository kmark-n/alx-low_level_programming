#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: unsigned integer
 * @...: eclipse(arguments)
 * Return: int
 */


int sum_them_all(const unsigned int n, ...)
{
va_list numbers;
int sum;
unsigned int i;

if (n == 0)
{
return (0);
}
sum = 0;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
sum += var_arg(numbers, int);
va_end(numbers);
return (sum);
}
}
