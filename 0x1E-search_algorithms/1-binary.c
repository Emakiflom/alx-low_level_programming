#include "search_algos.h"

/**
 * print_arr - helper func to print array everytime array is halved
 * @array: array
 * @low: left index of original array
 * @high: right index of original array
 */
void print_arr(int *array, size_t low, size_t high)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - search mids
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t low = 0;
	size_t high = size - 1;

	if (!array || size <= 0)
		return (-1);

	while (low <= high)
	{
		print_arr(array, low, high);

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
