#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("Program name: %s\n", argv[0]);
	}

	return (0);
}
