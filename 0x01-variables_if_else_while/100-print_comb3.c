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
int ones = '0';
int tens = '0';

for (tens = '0'; tens < '9'; tens++)
{
for (ones = '0'; ones < '9'; ones++)
{
if (!((ones == tens) || (tens < ones)))
{
putchar(ones);
putchar(tens);
if (!(ones == '9' && tens == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
