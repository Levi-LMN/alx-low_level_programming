#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root using binary search
 * @n: The number to find the square root of
 * @start: The starting point for binary search
 * @end: The ending point for binary search
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - Calculates the square root of a number
 * @n: The number to find the square root of
 *
 * Return: The nat square root of n, or -1 if n does not have a nat square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Return -1 for negative numbers (no natural square root) */

	if (n == 0 || n == 1)
		return (n); /* Base case: square root of 0 or 1 is the number itself */

	return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - Helper function to find the square root using binary search
 * @n: The number to find the square root of
 * @start: The starting point for binary search
 * @end: The ending point for binary search
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid); /* Found the square root */

		if (mid * mid > n)
			return (_sqrt_helper(n, start, mid - 1)); /* Recurse on the left half */

		return (_sqrt_helper(n, mid + 1, end)); /* Recurse on the right half */
	}

	return (-1); /* No natural square root found */
}

