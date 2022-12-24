#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer of array int
 * @n: the number of elements to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i = 0;
int j = 0;
int *first, *last;
int aux = 0;

first = a;
last = a;
n--;
while (i < n)
{
i++;
}
while (j <= i)
{
aux = first[j];
first[j] = last[i];
last[i] = aux;
j++;
i--;
}
}
