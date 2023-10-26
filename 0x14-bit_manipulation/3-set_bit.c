#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
  * @n: decimal  number that cames from parameter.
 * @index: index number.
 * Return: value.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
