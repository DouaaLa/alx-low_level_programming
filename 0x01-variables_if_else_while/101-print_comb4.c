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
	int n1, n2, n3;

	for (n1 = 0; n1 <=7; n1++)
	{
		for(n2 = n1 + 1; n2 <= 8; n2++)
		{
			for(n3 = n2 +1; n3 <= 9; n3++)
			{
				putchar(48 + n1);
				putchar(48 + n2);
				putchar(48 + n3);
				if (n1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
  
