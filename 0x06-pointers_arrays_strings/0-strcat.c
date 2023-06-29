#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination string
 * @src:  source string
 *
 * Return: pointer to string dest
 */

char *_strcat(char *dest, const char *src)
{
	char *temp = dest;

	while (*temp)
		temp++;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}

	*temp = '\0';

	return (dest);
}
