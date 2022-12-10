#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program that prints alphabet in lowercase
 * followed by new line
 * only use putchar function
 *Return: (0)
 */

int main(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
