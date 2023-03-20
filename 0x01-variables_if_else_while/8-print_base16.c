#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char str;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(48 + n);
	}
	for (str = 'a' ; str <= 'f' ; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
