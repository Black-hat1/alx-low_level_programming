#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int));
{
    for (int i = 0; i < size; i++)
    {
        if (cmp(array[i]))
	{
            return i;
        }
    }
    return -1;
}
