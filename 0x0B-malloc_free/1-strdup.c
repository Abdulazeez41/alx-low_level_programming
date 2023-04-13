#include <stdlib.h>
#include <stddef.h>

/**
 *	_strdup - Copies a string from a parameter to a new memory
 *	@str: character input
 *	Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	int len;
	int i;

	if (str[0] == '\0')
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{

	}
	s = malloc(len * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';
	return (s);
}
