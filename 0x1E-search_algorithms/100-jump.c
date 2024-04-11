#include <math.h>
#include "search_algos.h"

/**
 * jump_search - search a sorted array for a value using jump search method
 * @array: the array to be searched
 * @size: the size of the array (number of elements)
 * @value: the int to be searched for
 *
 * Return: 1st index value is found at or -1 if not present or null array
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int start = 0;
	int section_end = 0;

	if (array == NULL || size == 0 || array[start] > value)
		return (-1);

	while (section_end < (int)size)
	{
		if (array[section_end] < value)
		{
			printf("Value checked array[%d] = [%d]\n", section_end, array[section_end]);

			start = section_end;
			section_end += jump;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", start, section_end);

	if (section_end > (int)size - 1)
		section_end = size - 1;

	while (start <= section_end)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}
