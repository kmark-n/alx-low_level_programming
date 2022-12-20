#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
