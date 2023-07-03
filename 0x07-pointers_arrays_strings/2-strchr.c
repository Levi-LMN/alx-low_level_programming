#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates the first occurrence of character c in string s
 * @s: Pointer to the string to search
 * @c: Character to find
 *
 * Return: Pointer to the first occurrence of character c in string s,
 *         or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

