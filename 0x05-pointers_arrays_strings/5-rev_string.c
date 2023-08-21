#include "main.h"

/**
 * rev_string - Write a String in opposite manner
 * @s: pointing to the string
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0, z = 0, half;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	half = length / 2;

	while (half--)
	{
		temp = s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}
