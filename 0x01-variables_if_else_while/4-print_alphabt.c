#include <stdio.h>
/**
* main - returns 0
*
* Description - main returns 0
* putchar - Print alphabet without e or q
* Return: 0
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z' ; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
