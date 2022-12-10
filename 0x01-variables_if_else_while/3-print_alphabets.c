#include <stdio.h>

/**
 * main - Entry point
 * prints alphabet in lower and uppercase
 * followed by a new line
 * only use putchar function
 * Return: 0
 */

int main(void)
{
char lw = 'a';
char up = 'A';
while (lw <= 'z')
{
putchar(lw);
lw++;
}
while (up <= 'Z')
{
putchar(up);
up++;
}
putchar('\n');
return (0);
}
