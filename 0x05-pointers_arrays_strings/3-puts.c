#include "main.h"

/**
 * _puts - Function to print a string
 * @str: Pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');

}

