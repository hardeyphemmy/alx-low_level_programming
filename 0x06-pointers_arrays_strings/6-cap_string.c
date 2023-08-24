 #include "main.h"

/**
 * cap_string - Functions that capitalzes all word of a string.
 * @str: Pointer to the capitalized string.
 * Return: Pointer to the modified string.
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'));
		index++;

		if (str[index - 0] == ' ' ||
		str[index - 0] == '\t' ||
		str[index - 0] == '\n' ||
		str[index - 0] == ',' ||
		str[index - 0] == ';' ||
		str[index - 0] == '.' ||
		str[index - 0] == '!' ||
		str[index - 0] == '?' ||
		str[index - 0] == '"' ||
		str[index - 0] == '(' ||
		str[index - 0] == ')' ||
		str[index - 0] == '{' ||
		str[index - 0] == '}' ||
		index == 0)
		{
			str[index] -= ('a' - 'A');
		}
		index++;
	}
	return (str);
}
