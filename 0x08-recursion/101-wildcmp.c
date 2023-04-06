#include "main.h"

/**
 * wildcmp - compares two string.
 * @s1: 1st string to be compared
 * @s2: second string containing '*' or not
 * Return: 1 if the strings can be considered as identical, and 0
 **/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
