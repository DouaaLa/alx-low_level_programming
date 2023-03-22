#include "main.h"

/**
 * isalapha - abcdABCD
 * @c: lower or upper case character
 *
 * Return: On success 1
 * On error , 0 is returned
 */
int _isalpha(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}
	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
