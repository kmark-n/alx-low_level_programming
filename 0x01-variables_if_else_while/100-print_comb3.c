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
int n1 = 48;
int n2;
while (n1 <= 57);
{
n2 = n1 + 1;
while (n2 <= 57)
{
putchar(n1);
putchar(n2);
if (n1 != 56 || n2 != 57)
{
putchar(',');
putchar(' ');
}
n2++;
}
n1++;
}
putchar('\n');
return (0);
}
