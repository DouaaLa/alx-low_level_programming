#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int cpt;

	cpt = 0;
	while (s[cpt] != '\0')
	{
		cpt++;
	}
	return (cpt);
}
