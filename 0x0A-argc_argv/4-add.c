#include "main.h"
#include <string.h>

/**
 * main - add numbers
 * @argc: integer
 * @argv: character
 * Return : 0
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
