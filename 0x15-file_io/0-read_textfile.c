#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * my_read_and_print - reads a text file and print
 * @fname: read name of the file
 * @max_chars: no of char
 *
 * Return: no of char
 */
ssize_t my_read_and_print(const char *fname, size_t max_chars)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *data_buffer;

	if (fname == NULL)
		return (0);

	file_descriptor = open(fname, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	data_buffer = malloc(sizeof(char) * max_chars);
	if (data_buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, data_buffer, max_chars);
	close(file_descriptor);

	if (bytes_read == -1)
	{
		free(data_buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, data_buffer, bytes_read);
	free(data_buffer);

	if (bytes_read != bytes_written)
		return (0);

	return (bytes_written);
}
