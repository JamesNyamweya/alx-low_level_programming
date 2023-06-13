#include "main.h"

/**
 * _memset - Fills a memory block with specific values
 * @s: Starting address
 * @b: Desired value
 * @n: Number of bytes to be changed
 * Return: Returns changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
