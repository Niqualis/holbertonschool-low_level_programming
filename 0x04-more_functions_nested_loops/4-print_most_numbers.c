#include "holberton.h"

/**
* print_most_numbers - print most number
*
* Description: Print numbers 0 to 9 except for 2 and 4
*
*/
void print_most_numbers(void)
{

int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
_putchar(i + '0');
}
_putchar('\n');
}
