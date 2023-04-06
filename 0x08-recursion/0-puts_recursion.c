#include "main.h"

/**
 *_puts_recursion - print a string followed by a new line.
 *@s: the string to be outputted using recursion
 *
 *Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}