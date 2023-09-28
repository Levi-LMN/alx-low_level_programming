#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number whose bit is to be cleared.
 * @index: The index of the bit to be cleared (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8) /* Check if index is out of range */
		return (-1);

	*n = (*n & ~(1UL << index)); /* Set bit at the given index to 0*/
	return (1);
}

