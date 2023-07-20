#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Variadic function that prints strings from arguments
 * that are passed into this function
 * @separator: What separates the arguments being passed in
 * @n: Number of arguments being passed in
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list my_list;

	va_start(my_list, n);

	for (a = 0; a < n; a++)
	{
		char *str = va_arg(my_list, char *);

		if (a > 0 && separator != NULL)
			printf("%s", separator);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	}
	va_end(my_list);

	printf("\n");
}
