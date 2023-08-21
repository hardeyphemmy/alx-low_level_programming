#include "main.h"

/**
 * swap_int - Functions that change two variables
 * @a: Swaps and stores address of b
 * @b: Swaps and stores address of a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}

