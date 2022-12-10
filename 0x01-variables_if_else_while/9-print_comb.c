#include <stdio.h>

/**
 * main - Entry point
 * print a combo of single digit numbers
 * should be in ascending order
 * to be seperated by comma and space
 * putchar function only
 * to be used onlty 4 times
 * Return: 0
 */

int main(void)
{
int a = 0;
while (a < 10)
{
putchar(48 + a);
if (a != 9)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
