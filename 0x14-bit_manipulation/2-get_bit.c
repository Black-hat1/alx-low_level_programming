#include "main.h"

/**
 * get_bit - Gets the value of a bit in a given index.
 * @n: The bit
 * @index: the index to get the value at
 *
 * Return: if an error occurs - -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
