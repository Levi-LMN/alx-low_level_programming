#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0, word_length = 0, len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			word_count++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				word_length++;
				i++;
			}
		}
	}

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			word_length = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				word_length++;
				j++;
			}

			words[k] = malloc(sizeof(char) * (word_length + 1));

			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			j = 0;
			while (i < len && str[i] != ' ')
			{
				words[k][j] = str[i];
				i++;
				j++;
			}
			words[k][j] = '\0';
			k++;
		}
		i++;
	}

	words[k] = NULL;

	return (words);
}

