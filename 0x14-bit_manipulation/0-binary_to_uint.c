#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing 0 and 1 characters.
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	/* Calculate the length of the binary string */
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (; *b != '\0'; b++)
	{
		if (*b == '0')
			result = (result << 1); /* Left shift the result by 1*/
		else if (*b == '1')
			result = (result << 1) | 1; /* Left shift result by 1 */
	}

	return (result);
}

