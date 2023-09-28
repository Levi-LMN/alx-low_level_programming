#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number whose bit is to be retrieved.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8) /* Check if index is out of range */
		return (-1);

	/* Shift the bit at given index to rightmost position,check value */
	return ((n >> index) & 1);
}

