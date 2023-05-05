#include "main.h"

/**
 * get_bit - Function thast value of a bit at a given index.
 * @n: decimal  number that cames from parameter.
 * @index: index number.
 * Return: value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_man;

	bit_man = (n >> index);
	if (index > 32)
	return (-1);
	return (bit_man & 1);
}
