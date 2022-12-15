# include <stdio.h>

/**
 * main - Entry point
 * a program that prints first 50 fibonacci numbers
 * starting with 1 and two
 * Return: int
 */

int main(void)
{
long i = 0;
long j = 1;
int n = 0;
long fib;

while (n < 50)
{
fib = j + i;
if (n != 49)
{
printf("%ld, ", fib);
}
else
{
printf("%ld, ", fib);
}
i = j;
j = fib;
n++;
}
return (0);
}
