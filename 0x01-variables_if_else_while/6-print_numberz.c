#include <stdio.h>

/**
 * prints single digit numbers of base 10
 * starting with 0
 * followed by new line
 * putchar function only
 * to be used twice in code
 * Return: 0
 */

int main(void)
{
int a = 0;
while (a < 10)
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
