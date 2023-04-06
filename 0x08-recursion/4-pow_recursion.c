#include "main.h"

/**
 * _pow_recursion - determine the pow of number
 * @x: integer
 * @y: integer
 *
 * Return: pow of a number.
 * On error , it returned -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
