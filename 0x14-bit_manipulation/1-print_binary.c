#include "main.h"

/**
 * print_binary - Print a number's binary representation.
 * @n: Number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
