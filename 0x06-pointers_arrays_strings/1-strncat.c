#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes from src to concatenate
 *
 * Return: Pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, const char *src, int n)
{
	char *temp = dest;

	while (*temp)
		temp++;

	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}

	*temp = '\0';

	return (dest);
}

