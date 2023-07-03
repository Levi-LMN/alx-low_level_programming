#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the 2D square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];                 /*main diagonal  */
		sum2 += a[i * size + (size - i - 1)];    /*diagonal element */
	}

	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}

