#include "main.h"
#include <unistd.h>

/**
 * _putchar - A function that writes the character c to stdout.
 * @c: The character to print that comes from parameter.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
