#include "main.h"

/**
 * _strdup - point on the duplicate string argument
 * @str: string
 * Return: pointer to the new string
 * On error, it returned NULL.
 */
char *_strdup(char *str)
{
	char *s;
	int size, i;

	size = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + size))
	{
		size++;
	}
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
