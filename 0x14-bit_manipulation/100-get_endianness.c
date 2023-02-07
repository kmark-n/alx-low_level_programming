#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 1 if little edian and 0 if big edian
 */

int get_endianness(void)
{
char num;
char *ptr;

num = '1';
ptr = &num;
if (*ptr == 0)
{
return (0);
}
else
{
return (1);
}
}
