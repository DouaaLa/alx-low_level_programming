#include "main.h"

/**
 * print_alphabetx10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int cpt;
	char i;

	cpt = 0;
	do
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		cpt++;
		putchar('\n');
	} while (cpt < 10);
}
