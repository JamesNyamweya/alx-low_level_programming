#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: String
 * Return: Returns the length of a string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
