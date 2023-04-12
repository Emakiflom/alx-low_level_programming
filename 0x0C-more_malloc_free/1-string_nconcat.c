#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings that's inputted number of bytes.
 * @s1: The first string from the parameter.
 * @s2: The second string from the parameter.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If fails - NULL.Otherwise - a pointer concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int s1_len;
	unsigned int concat_len;
	char *concat;

	s1_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		s1_len++;

	concat_len = s1_len + n;

	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';

	return (concat);
}
