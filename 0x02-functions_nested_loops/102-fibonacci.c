#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count = 50;
	unsigned long long int fib_k = 1, fib_m = 2, fib;
	int i;

	printf("%llu, %llu", fib_k, fib_m);
	for (i = 3; i <= count; i++)
	{
		fib = fib_k + fib_m;
		printf(", %llu", fib);

		fib_k = fib_m;
		fib_m = fib;
	}

	printf("\n");

	return (0);
}

