#include "main.h"

/**
 * _strlen - check the code
 * @s: variable
 * Return: void.
 */
int _strlen(char *s)
{
	int cpt = 0;

	while (*(s + cpt) != '\0')
	{
		cpt++;
	}
	return (cpt);
}
