#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct func to perform an
 * operation asked by user
 * @s: operator passed an an argument to the program
 * Return: a  pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;
while (i < 5)
{
if (*s == *(ops[i]).op)
{
return (*(ops[i]).f);
}
i++;
}
return (NULL);
}
