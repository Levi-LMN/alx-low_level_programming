#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: This function prints a string in reverse order,
 * followed by a new line character.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	if (s == NULL)
		return;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the characters in reverse order */
	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}

