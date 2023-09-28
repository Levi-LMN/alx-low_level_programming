#include <stdio.h>
#include "main.h"

int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	_putchar('0' + n);
	_putchar('\n');

	n = binary_to_uint("101");
	_putchar('0' + n);
	_putchar('\n');

	n = binary_to_uint("1e01");
	_putchar('0' + n);
	_putchar('\n');

	n = binary_to_uint("1100010");
	_putchar('0' + n);
	_putchar('\n');

	n = binary_to_uint("0000000000000000000110010010");
	_putchar('0' + n);
	_putchar('\n');

	return (0);
}

