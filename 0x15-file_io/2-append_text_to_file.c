#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Name of the file to which text will be appended.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;
	ssize_t text_length;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytes_written = write(file_descriptor, text_content, text_length);
		if (bytes_written != text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}

