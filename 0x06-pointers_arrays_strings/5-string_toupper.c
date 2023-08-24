#include "main.h"

/**
 * string_toupper - Function tht change all lowercase letter to uppercase
 * @str: Pointer
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'Z');
		}
		i++;
	}
	return (str);
}
