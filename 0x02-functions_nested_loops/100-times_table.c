#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number for which the times table is printed
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			if (j != 0)
				printf("  ");

			if (product < 10)
				printf(" ");

			if (product < 100)
				printf(" ");

			printf("%d", product);

			if (j != n)
				printf(",");
		}

		printf("\n");
	}
}

