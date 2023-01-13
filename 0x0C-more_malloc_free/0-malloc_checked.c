#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: letter assigned to an int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
void *all;
all = malloc(b);
if (all == NULL)
{
exit(98);
}
else
{
return (all);
}
}
