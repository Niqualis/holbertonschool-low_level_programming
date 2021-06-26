#include <stdio.h>
/**
*main - entry point
* description - quotes and spaces for numbers and stuff
*Return: always 0 (success)
*/
int main(void)
{
int f;

for (f = '0' ; f <= '9' ; f++)
{
putchar(f);
if (f < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
