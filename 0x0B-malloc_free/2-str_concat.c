#include <stdlib.h>
#include <stddef.h>

/**
 *	str_concat - Concatenate two strings by assigning a memory allocation 
 *	@s1: character input
 *	@s2: character input
 *	Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int len1;
	int len2;
	int i;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	len1 = str_len(s1);
	len2 = str_len(s2);
	join = malloc((len1 + len2) * sizeof(char));
	if (join == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		join[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		join[len1 + 1] = s2[i];
	}
	return (join);
}

/**
 *	str_len - Count the length of characters
 *	@s: integer input
 *	Return: length
 */
int str_len(int *s)
{
	int i;
	for  (i = 0; s[i] != '\0'; i++)
	{
	
	}
	return (i);
}
