#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = sizeof(n) * 8 - 1; /* Number of bits in unsigned long int */

	/* Find the first set bit from the left */
	while (!(n & (1UL << i)))
		i--;

	for (j = i; j >= 0; j--)
	{
		if (n & (1UL << j))
			_putchar('1');
		else
			_putchar('0');
	}
}

