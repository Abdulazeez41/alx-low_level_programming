#include "hash_tables.h"

/**
 * hash_table_create - create a hash table.
 * @size: size of the array.
 * Return: NULL or table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hts;
	unsigned long int i;

	i = 0;
	hts = malloc(sizeof(hash_table_t));
	if (hts == NULL)
		return (NULL);

	hts->size = size;
	hts->array = malloc(sizeof(hash_node_t *) * size);
	if (hts->array == NULL)
		return (NULL);
	for (; i < size; i++)
		hts->array[i] = NULL;

	return (hts);
}
