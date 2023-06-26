#include "main.h"

/**
 * _puts - prints a string then a new line to stdout
 * @str: means string
 * Return: length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
