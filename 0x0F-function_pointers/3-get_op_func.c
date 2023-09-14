#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s: The operator passed as arrgument
 * Return: A pointer to the function corresponding to the
 * opperator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (operators[i].op != NULL)
	{
		if (strcmp(operators[i].op, s) == 0)
		{
			return (operators[i].f);
		}
		i++;
	}
	return (NULL);
}
