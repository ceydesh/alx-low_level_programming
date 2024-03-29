
#include "hash_tables.h"
/**
 * hash_table_delete - frees the hash table
 * @ht: pointer to the hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
