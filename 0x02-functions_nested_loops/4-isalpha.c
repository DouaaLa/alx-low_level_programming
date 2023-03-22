#include "main.h"

/**
 * isalapha - abcdABCD
 * @c: Description of parameter x
 *
 * Decription: isalpha function
 * section header: Section description)*
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
