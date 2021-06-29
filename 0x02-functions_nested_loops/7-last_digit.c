#include "holberton.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @f: number's last digit result
* Return: value of the last digit
*/
int print_last_digit(int f)
{
int j;

pld = (f % 10);

if (j < 0)
{
j = (-1 * j);
}

_putchar(j + '0');
return (j);
}
