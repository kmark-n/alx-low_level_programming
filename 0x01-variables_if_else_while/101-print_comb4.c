#include <stdio.h>

/**
 * main - Entry point
 * program that prints diff combinaitions of 3 digits
 * smallest combination (emphasis)
 * printed in ascending order, with 3 digits
 * only use the putchar function
 * six times only
 * Return: 0
 */
int main(void)
{
int c;
int d;
int e = 0;

while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (c != d && d != e && e <d && d < c)
{
putchar('0' + e);
putchar('0' + d);
putchar('0' + c);

if (c + d + e != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}

c++;
}
d++;
}
e++;
}
putchar('\n');
return (0);
}
