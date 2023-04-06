#include "main.h"

/**
 * factorial - factorials of numbers
 * @n: integer
 *
 * Return: 0 if it is 1.
 * On error, -1 is returned.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
