#include "main.h"

/**
 * binary_to_uint - Function that converts a binary num to unsigned int.
 * @b: string that contain binary number from parameter.
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decmal_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decmal_val = 2 * decmal_val + (b[j] - '0');
	}
	return (decmal_val);
}
