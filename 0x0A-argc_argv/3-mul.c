#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multipl of two numbers, followed by a new line.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: If the program receives two arguments - 0 Otherwise - 1.
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
