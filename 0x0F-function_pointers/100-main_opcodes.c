#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the opcodes of this program
 * @argc: the number of agruments
 * @argv: the array of pointers
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
