#include "main.h"

/**
 * _strlen - Function to return the lentht of string
 * @s: strings to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
