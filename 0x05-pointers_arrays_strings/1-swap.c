#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *@a : parameter
 * @b : parameter
 * Return : always 0
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
