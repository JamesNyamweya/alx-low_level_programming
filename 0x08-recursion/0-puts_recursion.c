#include "main.h"
/**
 * _puts_recursion - Operates like puts();
 * @s: Input
 * Return: Returns 0 if Successful
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
