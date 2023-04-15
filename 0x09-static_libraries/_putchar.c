#include <unistd.h>

/**
 * _putchar - to write the character c to standard output
 * @c: To Print
 *
 * Return: 1 on success
 * Return -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}