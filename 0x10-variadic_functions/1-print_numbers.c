#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers all in new line
 * @separator: The string to be printed b/n numbers.
 * @n: The number of integers passed to the function.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int num;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
