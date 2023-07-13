#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - .....
 * @q1: .....
 * @q2: .....
 * @w: ....
 *
 * Return: ....
 */
char *string_nconcat(char *q1, char *q2, unsigned int w)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *str;

	if (q1 == NULL)
		q1 = "";
	if (q2 == NULL)
		q2 = "";

	while (q1[a])
		a++;

	while (q2[c])
		c++;

	if (w >= c)
		d = a + c;
	else
		d = a + w;

	str = malloc(sizeof(char) * d + 1)
		if (str == NULL)
			return (NULL);

	c = 0;
	while (b < d)
	{
		if (b <= a)
			str[b] = q1[b];

		if (j <= a)
		{
			str[j] = q2[c];
			b++;
		}
		b++;
	}
	str[b] = '\0';
	return (str);
}


