#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @size: size of the array
 * @action: pointer to the array
 * Return: (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != 0 && size >= 1 && action != 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}

