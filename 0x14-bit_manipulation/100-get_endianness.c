#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int my_num = 1;
	char *endian = (char *)&my_num;

	if (*endian == 1)
		return (1);

	return (0);
}
