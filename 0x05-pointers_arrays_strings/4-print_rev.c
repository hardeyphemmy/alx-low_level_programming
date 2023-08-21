#include "main.h"

/**
 * print_rev - Function that print a string in opposite manner
 * @s: the used string reference pointer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
