#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: The charcter to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appriopriately.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}  