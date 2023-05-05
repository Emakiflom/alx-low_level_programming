#include "main.h"

/**
 * print_binary - Function that prints binary representation of a number.
 * @n: Number that comes from parameter.
 */

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
