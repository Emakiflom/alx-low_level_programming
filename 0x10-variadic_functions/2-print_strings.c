#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, in a new line.
 * @separator: The string be printed between strings.
 * @n: The number of strings passed to the function.
 * Description: If separator is NULL, it is not printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if ((i < n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
