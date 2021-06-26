#include <stdio.h>
/**
* main - entry point
*
* Description: lowercase alphabet backwards
* Return: 0
*/
int main(void)
{
char f;

for (f = 'z'; f >= 'a'; --f)
putchar(f);

putchar('\n');

return (0);
}
