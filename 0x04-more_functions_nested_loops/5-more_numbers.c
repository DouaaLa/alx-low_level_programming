#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: --
 * Return: --
 */
void more_numbers(void)
{
	int j;
	int i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
