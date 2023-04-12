#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Error - prints Error str.
 * Return: Error and new line.
 */
void Error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * allDigits - checks if all the characters are digits.
 * @arg: the arguments of program count arg.
 * Return: 1 all digits 0 otherwise.
 */
int allDigits(char **arg)
{
	int i, j;

	for (i = 1; i <= 2; i++)
		for (j = 0; arg[i][j]; j++)
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
				return (0);
		}
	return (1);
}

/**
 * _calloc- initializes memory with zero.
 * @nmemb: string 1 the first string.
 * @size: string 2, concatenated to 1 second string
 * Return: pointer to the concatenated string.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *newArray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	newArray = malloc(nmemb * size);
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(newArray + i) = 0;

	return (newArray);
}

/**
 * main- multiplies 2 positive numbers main function.
 * @argc: counter of arguments to count the arg
 * @argv: vector of arguments asa vector
 * Return: ans or Error
 */
int main(int argc, char **argv)
{
	int i, j, carry, len, len_s1 = 0, len_s2 = 0;
	char *s1 = *(argv + 1), *s2 = *(argv + 2);
	int *a, *b, *ans;

	if (argc != 3 || allDigits(argv) != 1)
		Error();
	if (*s1 == '0' || *s2 == '0')
		_putchar('0');
	while (*(*(argv + 1) + len_s1))
		len_s1++;
	while (*(*(argv + 2) + len_s2))
		len_s2++;
	len = len_s1 + len_s2 + 1;
	a = (int *) malloc(len_s1 * sizeof(int));
	b = (int *) malloc(len_s2 * sizeof(int));
	ans = _calloc(len, sizeof(int));
	if (a == NULL || b == NULL || ans == NULL)
		Error();
	for (i = len_s1 - 1, j = 0; i >= 0; i--, j++)
		*(a + j) = *(s1 + i) - '0';
	for (i = len_s2 - 1, j = 0; i >= 0; i--, j++)
		*(b + j) = *(s2 + i) - '0';
	for (i = 0; i < len_s2; i++)
		for (j = 0; j < len_s1; j++)
			*(ans + i + j) = *(ans + i + j) + *(b + i) * *(a + j);
	for (i = 0; i < len_s1 + len_s2; i++)
	{
		carry = *(ans + i) / 10, *(ans + i) = *(ans + i) % 10;
		*(ans + i + 1) = *(ans + i + 1) + carry;
	}
	for (i = len_s1 + len_s2; i >= 0; i--)
		if (*(ans + i) > 0)
			break;
	for (; i >= 0; i--)
		_putchar(*(ans + i) + '0');
	_putchar('\n');
	free(a), free(b), free(ans);
	return (0);
}
