#include "main.h"

/**
 * puts2 - Print character of string
 * @str: the used string reference
 * return: void
 */

void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
			_putchar(str[z]);
	}
	z++;
	_putchar('\n');
}
