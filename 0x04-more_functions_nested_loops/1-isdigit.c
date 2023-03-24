#include "main.h"

/**
 *_isdigit - Entry point
 *@c: c is a digit
 *
 * Description: checks for a digit (0 through 9).
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
