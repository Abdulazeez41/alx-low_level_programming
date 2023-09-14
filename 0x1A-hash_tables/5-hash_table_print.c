#include "hash_tables.h"
/**
 *hash_table_print - print a hash table
 *
 *@ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int counter = 0, i = 0;

	if (ht != NULL)
	{
		printf("{");
		for (counter = 0; counter < ht->size; counter++)
		{
			nd = ht->array[counter];
			while (nd != NULL)
			{
				if (i != 0)
					printf(", ");
				i = 1;
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
			}
		}
		printf("}\n");
	}
}
