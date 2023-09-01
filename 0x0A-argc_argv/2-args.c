#include <stdio.h>

/**
 * main - prints all the arguments that it receives.
 * @argc: argument count
 * @argv: arguments
 *levi's code
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
