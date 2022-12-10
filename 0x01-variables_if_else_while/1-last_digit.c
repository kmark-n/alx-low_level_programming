#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * assigning a random number to variable n each time it's exeecuted
 * the variable to store a different value every time the program is run
 * if value is greater than 5: the string should be "and is greater than 5"
 * if value is 0: the string should be "and is 0"
 * if value is < than 6 and not equal to 0: string "and is less than 6 and not 0"
 * Return: (0)
 */
int main(void)
{
int n;
int lastn;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if (lastn > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (lastn == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else if (lastn < 6 && lastn != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
