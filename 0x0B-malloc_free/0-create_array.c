#include "main.h"

/**
 * create_array - Creates an array of chars
 * @size: Size of array
 * @c: Character
 * Return: Returns array, otherwise return NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
