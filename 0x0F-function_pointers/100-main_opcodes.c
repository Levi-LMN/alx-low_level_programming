#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on incorrect number of arguments,
 *         2 on negative number of bytes
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *ptr = (unsigned char *)main;

	for (i = 0; i < bytes - 1; i++)
		printf("%02x ", ptr[i]);

	printf("%02x\n", ptr[i]);

	return (0);
}

