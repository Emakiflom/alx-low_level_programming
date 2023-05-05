#include "main.h"

/**
 * flip_bits - A function that number of bits you would need to flip.
 * @n: decimal  number that cames from parameter.
 * @index: index number.
 * Return: n_flips returns.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, n_flips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			n_flips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (n_flips);
}
