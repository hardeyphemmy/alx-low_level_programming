#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: Pointer to the next node of the list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 * Return: A pointer to the newely created or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}

/**
 * hash_table_set - set the hash table
 * @ht: The hash to set the key-value pair
 * @key: The key, string
 * @value: The corresponding value in char
 * Return: int success (1) or failure (NULL)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash(key, ht->size);
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else {
		hash_node_t *current = ht->array[index];
		while (current->next != NULL){
			current = current->next;
		}
		current->next = new_node;
	}

	return(1);
}
