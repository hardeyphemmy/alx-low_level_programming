#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_get - Compute to retrieve from hash table
 * @ht: The hash table to retrieve from
 * @key: The key, string
 * Return: The element or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* calc the index in the hash table */
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	/* Tranverse the linked list @ calc index */
	hash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		/* check if it matches */
		if (strcmp(current->key, key) == 0)
		{
			/* return current value*/
			return (current->value);
		}
		/* move to the next node */
		current = current->next;
	}
	/* return NULL if key not found */
	return (NULL);
}
