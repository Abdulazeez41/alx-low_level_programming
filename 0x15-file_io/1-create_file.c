#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"


/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: char text_content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int new_fd;
	ssize_t new_len = 0;

	if (filename == NULL)
		return (-1);
	new_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_fd == -1)
		return (-1);
	if (text_content != NULL)
		new_len = write(new_fd, text_content, _countStr(text_content));
	close(new_fd);
	if (new_len == -1)
		return (-1);
	return (1);
}

/**
 * _countStr - finds string count
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _countStr(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
