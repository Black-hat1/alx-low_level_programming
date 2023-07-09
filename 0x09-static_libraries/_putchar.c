#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to pint
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
