#include "main.h"

/**
 * more_numbers - prints from 0-14 ten times
 * then a new line
 * Return: no
 */

void more_numbers(void)
{

int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
}
