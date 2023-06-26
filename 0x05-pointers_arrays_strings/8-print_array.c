#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the array of integers
 * @n: Number of elements to be printed
 *
 * Description: This function prints n elements of an integer array,
 * separated by commas and followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
		return;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d\n", a[i]);
}

