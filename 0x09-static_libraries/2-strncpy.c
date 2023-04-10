#include "main.h"

/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_des, len_src;

	len_des = 0;
	len_src = 0;
	while (dest[len_des] != '\0')
	{
		len_des++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (len_des >= len_src)
	{
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		for ( ; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
