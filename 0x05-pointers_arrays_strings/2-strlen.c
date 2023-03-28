#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	s = (int *)malloc(sizeof(char));
	if (s == NULL)
		exit(0);
	else
		return (*s);
}
