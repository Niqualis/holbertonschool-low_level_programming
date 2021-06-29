#include "holberton.h"
/**
* _isalpha -  filters Holberton input
*
* @h: char / ASCII character
*
* Return: 1 when true, 0 for all else
*/
int _isalpha(int h)
{

if (h > 64 && h < 123)
return (1);
else
return (0);
}
