#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * @str: This is a input string
 * Return: void
 */

void puts_half(char *str)
{
	int full_string = 0, half_string;

	full_string = 0;
	while (str[full_string] != '\0')
		full_string++;

	half_string = full_string / 2;

	if (full_string % 2 == 1)
		half_string++;

	while (half_string < full_string)
	{
		_putchar(str[half_string]);
		half_string++;
	}
	_putchar('\n');
}
