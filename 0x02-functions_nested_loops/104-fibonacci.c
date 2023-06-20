#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *              separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int fib1 = 1, fib2 = 2, fib_next;
	int count;

	printf("%u, %u", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fib_next = fib1 + fib2;
		printf(", %u", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}

