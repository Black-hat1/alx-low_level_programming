#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  *
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */
void *calloc(unsigned int amemb, unsigned int size)
{
	void *p;
	unsigned int a;

	if (amemb == 0 || size == 0)
		return (NULL);
	p = malloc(amemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < (amemb * size); a++)
	{
		*((char *)(p) + a) = 0;
	}
	return (p);
}
