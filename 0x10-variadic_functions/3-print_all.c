#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list kingdom;

	va_start(kingdom, format);

	while (*format)
	{
		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(kingdom, int));
				break;
			case 'i':
				printf("%d",  va_arg(kingdom, int));
				break;
			case 'f':
				printf("%f", va_arg(kingdom, double));
				break;
			case 's':
				char *str_arg = va_arg(kingdom, char *);
				if (str_arg != NULL)
					printf("%s", str_arg);
				else
					printf("(nil)");
				break;
		}
		format++;
	}

	va_end(kingdom);

	printf("\n");
}
