#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - function that sets the value a bit to 1 at given index
 * @n: pointer to the number
 * @index: bit to change
 * Return: 1 if it worked or -1 if error occurred
 */


int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
unsigned int s_index;
(void) index;

mask = 1;
s_index = 0;
while (mask < 21474883648)
{
if (s_index == index)
{
*n = *n | 1 << index;
return (1);
}
s_index++;
mask = mask << 1;
}
return (-1);
}
