#include "main.h"

/**
 * reverse_array - Function that reverse arrays of integer
 * @a: array to be reversed
 * @n: number of element of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
