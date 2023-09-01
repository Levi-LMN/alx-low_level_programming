#include <stdio.h>

/**
 * main - prints number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments
 *Levi's code
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
