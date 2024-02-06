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
 * struct hash table_s
 * @size: The size of the array
 * @array: The array of the size @size
 * Each cell of the array is a pointer to the first node of a linked list,
 * because we want Hashtable to use a chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 * Return: A pointer to the newely created or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
	{
	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t *));

	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = (hash_node_t **)calloc(size, sizeof(hash_table_t));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
