#include "main.h"

/**
 * print_sign - prints the sing of a number
 * @n: the number of thr sign to be printed
 * Return: 1 if number is greater than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
