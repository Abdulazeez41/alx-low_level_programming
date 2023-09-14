#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associated with a key
 *
 *@ht: hash table
 *@key: key
 *
 *Return: NULL or value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int i;

	if (key == NULL || ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	nd = ht->array[i];

	for (; nd != NULL; nd = nd->next)
	{
		if (strcmp(nd->key, key) == 0)
			return (nd->value);
	}
	return (NULL);
}
