#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int m, n, product;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			product = m * n;

			if (product < 10)
			{
				if (n != 0)
					_putchar(' ');

				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

