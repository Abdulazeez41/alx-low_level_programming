#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads and prints a specified number of letters from a file.
 *
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: number of letters read and printed on success, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytesRead, bytesWrite;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, buffer, letters);
	close(file);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);
	if (bytesRead != bytesWrite)
		return (0);
	return (bytesWrite);
}
