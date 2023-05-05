#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 * Return: 0 if big endian and 1 if little.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
