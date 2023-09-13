#include "hash_tables.h"

/**
 * hash_djb2 - hash function generates a djb2
 * @str: pointer to a const chars
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hh = 5381;
	int c;

	while ((c = *str++))
	hh = ((hh << 5) + hh) + c;

	return (hh);
}
