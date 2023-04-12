#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 * Return: pointer to the new allocated space.
 * On error, it returned NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *cc;
	int size_s1, size_s2, i;

	size_s1 = 0, size_s2 = 0;
	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[size_s1])
	{
		size_s1++;
	}
	while (s2[size_s2])
	{
		size_s2++;
	}
	cc = malloc(sizeof(char) * (size_s1 + size_s2) + 1);
	if (cc == NULL)
		return (NULL);
	for (i = 0; i < size_s1 + size_s2; i++)
	{
		if (i < size_s1)
		{
			cc[i] = s1[i];
		}
		else
		{
			cc[i] = s2[i - size_s1];
		}
	}
	return (cc);
}
