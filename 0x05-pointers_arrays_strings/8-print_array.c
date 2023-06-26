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
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
