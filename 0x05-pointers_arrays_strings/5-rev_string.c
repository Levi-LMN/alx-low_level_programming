#include <stdlib.h>

/**
 * rev_string - Reverses a string.
 * @s: String parameter to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	char *reversed;
	int i;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	/* Allocate memory for the reversed string */
	reversed = malloc((length + 1) * sizeof(char));

	if (reversed == NULL)
		return; /* Failed to allocate memory */

	/* Copy characters in reverse order */
	for (i = 0; i < length; i++)
		reversed[i] = s[length - i - 1];

	reversed[length] = '\0'; /* Add null terminator */

	/* Copy the reversed string back to the original string */
	for (i = 0; i < length; i++)
		s[i] = reversed[i];

	free(reversed);
}

