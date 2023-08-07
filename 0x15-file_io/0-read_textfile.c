#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints the contents of a text file to stdout.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file cannot be opened or read, or if @filename is NULL,
 *         or if write fails to print the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	ssize_t bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);

	close(file_descriptor);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}

