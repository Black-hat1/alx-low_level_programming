#include "main.h"
/**
 * _memset - fill a block of memory with some values
 * @s: starting address
 * @b: the value
 * @n: number of bytes to be changed
 *
 * Return: Changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
