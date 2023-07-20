#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"


/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @content: no of char
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *content)
{
	int my_fd;
	ssize_t my_len;

	if (filename == NULL)
		return (-1);
	my_fd = open(filename, O_WRONLY | O_APPEND);
	if (my_fd == -1)
		return (-1);
	if (content != NULL)
		my_len = write(my_fd, content, _countStr(content));
	close(my_fd);
	if (my_len == -1)
		return (-1);
	return (1);
}

/**
 * _countStr - finds string count
 * @str: pointer to the string
 *
 * Return: length of string
 */
size_t _countStr(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
