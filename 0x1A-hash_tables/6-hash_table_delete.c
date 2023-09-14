#include "hash_tables.h"
/**
 *hash_table_delete - deletes a hash table
 *
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nd, *tmp;
	unsigned long int counter = 0;

	for (counter = 0; counter < ht->size; counter++)
	{
		nd = ht->array[counter];
		while (nd != NULL)
		{
			tmp = nd;
			nd = nd->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
