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
	printf("%s \n", *(argv + 0));
	return (0);
}
