#include "variadic_functions.h"

/**
 * print_strings - Print numbers using a separator --parameter
 * @separator: The string separator of function
 * @n: The quantity of numbers
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *p;

va_start(valist, n);

for (i = 0; i < n; i++)
{
if (separator != NULL && i != 0)
printf("%s", separator);
p = va_arg(valist, char *);
printf("%s", (p == NULL) ? "(nil)" : p);
}
printf("\n");
va_end(valist);
}
