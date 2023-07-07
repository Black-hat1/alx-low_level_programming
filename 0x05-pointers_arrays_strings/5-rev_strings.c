#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)void rev_string(char *s)
{
	int count = 0, i, temp = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	for (i = 0 ; i <= ((count - 1) / 2) ; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (count - (i + 1)));
		*(s + (count - (i + 1))) = temp;
	}
}
