#include <stdio.h>

/**
 * main - Entry point
 * printing all letters except 'q' and 'e'
 * in lowercase
 * followed by new line
 * putchar function only - used only twice
 * Return: 0
 */

int main(void)
{
char lw = 'a';
while (lw <= 'z')
{
if (lw == 'e' || lw == 'q')
{
lw++;
}
else
{
putchar(lw);
lw++;
}
}
putchar('\n');
return (0);
}
