#include "holberton.h"
/**
* print_alphabet - Write a function that prints the alphabet.
* Description: Printing the lowercase alphabet
* Return: 0
*/
void print_alphabet(void)
{
int az;
for (az = 'a'; az <= 'z'; az++)
_putchar(az);
_putchar('\n');
}
