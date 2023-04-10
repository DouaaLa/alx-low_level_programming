#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}
	for (i = 0; i < n && src[i] != '\0'; ++i, ++length)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
