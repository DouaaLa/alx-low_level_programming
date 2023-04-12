#include "main.h"

/**
 * create_array - create a dynamic array
 * @size: Integer, size of array
 * @c: char
 * Return: pointer to the array
 * On error it returned NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr_s;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr_s = (char *)malloc(size * sizeof(char));
	if (arr_s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr_s + i) = c;
	*(arr_s + i) = '\0';
	return (arr_s);
}
