#include "main.h"

/**
 * set_bit - set the values of a bit at a given index to 1
 * @n: pointer to an unsigned long integer wherebit will be set
 * @index: index of the bit to set
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
		return (-1);

	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
