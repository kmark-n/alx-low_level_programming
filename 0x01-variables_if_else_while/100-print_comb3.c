#include <stdio.h>

/**
 * main - Entry point
 * prints all different combinations of 2 digits
 * smallest combination of 2 digits
 * print should be in ascending order
 * use putchar function only
 * to be used only 5 times
 * Return: 0
 */

int main(void)
{
int c;
int d = 0;

while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);

if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}

c++;
}
d++;
}
putchar('\n');
return (0);
}
