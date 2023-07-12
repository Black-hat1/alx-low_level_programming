#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array and initialize it with a special char.
 * @size: the size of array to be initialize
 * @c: the specific char to initialize array with
 *
 * Return: if size == 0 or if thr function fails - NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
