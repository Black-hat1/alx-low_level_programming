#include "function_pointers.h"

/**
 * array_iterator - executea a function
 * @array: array to execute funtion
 * @size: size of the array
 * @action: pointer
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
