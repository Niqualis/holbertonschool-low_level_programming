#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stddef.h>

unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
