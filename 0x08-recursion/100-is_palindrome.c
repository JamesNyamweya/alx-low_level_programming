#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to reverse
 * Return: Returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to be calculated
 * Return: Returns the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Checks the characters recursively for palindrome
 * @s: String to be checked
 * @i: Iterator
 * @len: Length of the string
 * Return: Returns 1 if a string is a palindrome and 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
