#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * Key_index - Computes the index of a key in a hash table array
 *
 * @key: Key string to compute index
 * @size: The size of the hash table array
 * Return: Index which keyvaluepair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
