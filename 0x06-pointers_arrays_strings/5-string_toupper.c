#include "main.h"

/**
 * *string_toupper - function that changes all
 * lowercase letters of a string to  uppercase
 * @ptr: pointer to char
 * Return: char
 */

char *string_toupper(char *)
{
int i = 0;

while (ptr[i] != '\0')
{
if (ptr[i] >= 97 && ptr[i] <= 122)
{
ptr[i] = ptr[i] - ' ';
}
i++;
}
return (char);
}
