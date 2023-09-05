#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of arguments
 * @av: array of strings representing the arguments
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0, arg_length = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_length = 0;
		while (av[i][arg_length] != '\0')
		{
			arg_length++;
			total_length++;
		}
		total_length++; /* Account for the newline character */
	}

	concatenated = malloc(sizeof(char) * (total_length + 1));

	if (concatenated == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		arg_length = 0;
		while (av[j][arg_length] != '\0')
		{
			concatenated[k] = av[j][arg_length];
			k++;
			arg_length++;
		}
		concatenated[k] = '\n';
		k++;
	}
	concatenated[k] = '\0';

	return (concatenated);
}

