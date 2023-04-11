#include "main.h"

/**
 * main - Entry point
 * @argc: integr, number of arguments
 * @argv: string containing the values of the array
 * Return: On success 0
 * On error exit.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
