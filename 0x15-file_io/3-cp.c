#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the specified code.
 *
 * @code: The exit code.
 * @msg: The error message to print.
 */
void error_exit(int code, char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUF_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file");

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to file");

	do {
		bytes_read = read(file_from, buffer, BUF_SIZE);
		if (bytes_read == -1)
			error_exit(98, "Error: Can't read from file");

		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file");
	} while (bytes_read > 0);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close file descriptor");
	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close file descriptor");

	return (0);
}

