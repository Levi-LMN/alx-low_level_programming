#include "main.h"

/**
 *  prints alphabet in lowercase
 *
 * It prints the alphabet in lower case
 *
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <='z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('n');
}
