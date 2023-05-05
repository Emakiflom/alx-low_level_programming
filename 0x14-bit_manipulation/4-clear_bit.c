#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: decimal  number that cames from parameter.
 * @index: index number.
 * Return: 1 if works, -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
