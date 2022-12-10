#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * prints lowercase alphabet in reverse
 * followed by a new line
 * putchar function only
 * to be used only twice
 * Return: 0
 */

int main(void)
{
char x = 'z';
while (x >= 'a')
{
putchar(x);
x--;
}
putchar('\n');
return (0);
}
