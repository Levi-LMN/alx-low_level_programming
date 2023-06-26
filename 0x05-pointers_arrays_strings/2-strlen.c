#include <stdio.h>

/**
 * _strlen - returns length of a string
 *@s : parameter
 *
 * Return:  length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
