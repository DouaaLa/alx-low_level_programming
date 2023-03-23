#include "main.h"

/**
 * _isupper - check the code.
 * @i: Description of parameter x
 *
 * Description: ddzqdqzd
 * Description
 * Return: Always 0.
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
