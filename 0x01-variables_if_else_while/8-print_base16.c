#include <stdio.h>

/**
* main - entry point
*
* Description: digits of base 16 in lowercase
* Return: 0
*/
int main(void)
{
char f;

for (f = '0'; f <= '9'; ++f)
putchar(f);
for (f = 'a'; f <= 'f'; ++f)
putchar(f);

putchar('\n');

return (0);
}
