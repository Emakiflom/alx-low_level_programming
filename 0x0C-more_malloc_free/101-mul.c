#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Finds the length of a string usinf loop.
 * @str: The string to be measured from the main function.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i;

	for(i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * main - multiplies two positive numbers from parameter
 * @argc: number of arguments from main function
 * @argv: array of arguments from main function
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned long int a, b, res; 
	
	int len_a, len_b;

	len_a = _strlen(argv[1]);
	len_b = _strlen(argv[2]);

	for (i = 0; i < )

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = mul(a, b);
	printf("%d", res);
}
