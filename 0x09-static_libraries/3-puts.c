#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: String to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}