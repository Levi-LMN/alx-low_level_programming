#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 * Levi's code
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	/* If the first byte in the byte array is non-zero */
	return (byte[0] ? 1 : 0);
}

