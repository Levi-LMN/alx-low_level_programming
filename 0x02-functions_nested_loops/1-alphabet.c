#include "main.h"


/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: prints the lowercase alphabet using the _putchar function.
 *
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
