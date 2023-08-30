#include "main.h"

/**
 * _puts_recursion - Function like puts();
 * @s: input
 * Return: Returns 0 is successful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
