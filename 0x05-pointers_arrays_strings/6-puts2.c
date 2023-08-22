#include "main.h"

/**
 * puts2 - Print character of string
 * @str: the used string reference
 * return: void
 */

void puts2(char *str)
{
	int longl = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longl++;
	}
	t = longl - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
