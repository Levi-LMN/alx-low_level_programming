#include <stdio.h>

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string to be printed
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '0')
		{
			putchar(*str);
			str++;
		}
	}
	putchar('\n');
}
