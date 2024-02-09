#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_delete - Delete hash tables
 * @ht: The hashtable
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}
	/* Deallocate each node in the table */
	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			hash_node_t *temp = current;

			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	/* Deallocate array */
	free(ht->array);
	/* Deallocate hash table */
	free(ht);
}
