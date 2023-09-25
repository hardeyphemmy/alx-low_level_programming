#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is fouond, 1 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, j, carry, digit1, digit2;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		errors();
	s1 = argv[1];
	s2 = argv[2];
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2;
	result_array = (int *)malloc(sizeof(int) * (len + 1));

	if (!result_array)
		return (1);
	for (i = 0; i <= len; i++)
		result_array[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = s1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = s2[j] - '0';
			carry += result_array[i + j + 1] + (digit1 * digit2);
			result_array[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result_array[i + j + 1] += carry;
	}
	free(result_array);
	return (0);
}
int _putchar(char c)
{
	return putchar(c);
}
