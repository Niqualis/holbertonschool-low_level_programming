#include <stdio.h>

/**
* main - entry point
*
* Description: Print 0 to 9 on one line
* Return: 0
*/
int main(void)
{
int f;

for (f = 0; f <= 9; ++f)
putchar('0' + f);

putchar('\n');

return (0);
}
