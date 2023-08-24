#include "main.h"

/**
 * leet - Function to encode string to 1337
 * @n: Input value
 * Return: n
 */

char *leet(char *n)
{
	int i;
	int j;
	char s1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (n[i] == s1[j] || n[i] == s1[j] + 32)
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
