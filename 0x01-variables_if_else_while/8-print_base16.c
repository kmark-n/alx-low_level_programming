#include <stdio.h>

/**
 * main - Entry point
 * prints numbers of base 16
 * followed by new line
 * putchar function only
 * to be used only three times
 * Return: 0
 */

int main(void)
{
int a = 0;
char x = 'a';

while (a < 10)
{
putchar(48 + a);
a++;
}
while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
