#include "holberton.h"

/**
* print_last_digit - Prints the last digit of a number
* @g: Taken variable
*
* Return: 0
*/
int print_last_digit(int g)
{
int x;
x = g % 10;
if (x >= 0)
{
_putchar (x + '0');
return (x);
}
else
{
_putchar (-x + '0');
return (-x);
}
}
