#include <stdio.h>

/**
 * main - Entry point
 * number to range from 0 to 99
 * numbers to be seperated by space
 * numbers to be printed with 2 digits
 * combination to be seperated by comma, then space
 * should be in ascending order
 * putchar function to be used only
 * for a maximum of 8 times
 * Return: 0
 */

int main(void)
{
int c = 0;
int f_d;
int l_d;

int c2;
int f_d2;
int l_d2;

while (c <= 98)
{
f_d = (c / 10 + '0');
l_d = (c % 10 + '0');
c2 = 0;
while (c2 <= 99)
{
f_d2 = (c2 / 10 + '0');
l_d2 = (c2 % 10 + '0');

if (c < c2)
{
putchar(f_d);
putchar(l_d);
putchar(' ');
putchar(f_d2);
putchar(l_d2);

if (c != 98)
{
putchar(',');
putchar(' ');
}
}
c2++;
}
c++;
}
putchar('\n');
return (0);
}
