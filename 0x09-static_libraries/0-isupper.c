#include "main.h"

/**
 * _isupper - Uppercase letters
 * @c: Character to be checked
 * Return: Returns 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
