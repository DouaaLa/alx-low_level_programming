#include "main.h"

/**
 * _puts - check the code
 * @s: variable
 * Return: void.
 */
void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
