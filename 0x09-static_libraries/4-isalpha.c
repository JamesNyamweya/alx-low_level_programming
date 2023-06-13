#include "main.h"

/**
 * _isalpha - Checks for alphabet characters
 * @c: Character to be checked
 * Return: Returns 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
