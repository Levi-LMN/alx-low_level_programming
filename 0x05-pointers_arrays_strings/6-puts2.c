#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting 1st
 * @str: Pointer to the string.
 * Return: none
 */
void puts2(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	}
	putchar('\n');
}

