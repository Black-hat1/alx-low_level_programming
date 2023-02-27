#include "main.h"

/**
 * print_rev - prints a string, s, in reverse with newline
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0, count2;

	while (*(s + count) != '\0')
	{
		count++;
	}
	count2 = count;
	while (count >= 0)
	{
		if (*(s + count) != '"' && count2 != count)
			_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
