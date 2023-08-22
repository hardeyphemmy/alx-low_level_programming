#include "main.h"
#include <stdio.h>

/**
 * print_array -  Function that prints an arrays with commas
 * @a: Pointer to the input array
 * @n: The length of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
