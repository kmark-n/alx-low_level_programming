# include <stdio.h>

/**
 * main - Entry point
 * prints the sum of all multiples of 3 and 5 below 1024
 * 1024 excluded
 * Return: int
 */

int main(void)
{
int c = 0;
int sum = 0;

while (c < 1024)
{
if (c % 3 == 0 || c % 5 == 0)
{
sum +=c;
}
c++;
}
print("%d\n", sum);
return (0);
}
