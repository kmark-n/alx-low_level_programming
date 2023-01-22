#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arguments;
unsigned int i;
char *aux;

va_start(arguments, n);
for (i = 0; i < n; i++)
{
aux = va_arg(arguments, char*);
if (aux == NULL)
{
printf("(nil)");
}
else
{
if (i < (n - 1) && separator != 0)
{
printf("%s%s", aux, separator);
}
else
{
printf("%s", aux);
}
}
}
va_end(arguments);
printf("\n");
}
