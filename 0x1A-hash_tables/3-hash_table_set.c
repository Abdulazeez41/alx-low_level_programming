#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: pointer to the hash
 *@key: pointer to the key
 *@value: value to be added
 *Return: 1 if is success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long i, size;
	hash_node_t *n_node;

	if (ht  == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	i = key_i((const unsigned char *)key, size);

	if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
	{
		ht->array[i]->value = strdup(value);
		return (1);
	}

	n_node = malloc(sizeof(hash_node_t));

	if (n_node == NULL)
		return (0);

	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = ht->array[i];
	ht->array[i] = n_node;
	return (1);
}
