#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

/**
 * copy_file - Copies the content of one file to another.
 *
 * @source: Source file descriptor.
 * @destination: Destination file descriptor.
 *
 * Return: 0 on success, or appropriate error codes on failure.
 */
int copy_file(int source, int destination)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(destination, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file descriptor\n");
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file descriptor\n");
		return (98);
	}

	return (0);
}

/**
 * main - Main function that handles command-line arguments and file copying.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, or appropriate error codes on failure.
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		return (99);
	}

	result = copy_file(file_from, file_to);

	close(file_from);
	close(file_to);

	return (result);
}

