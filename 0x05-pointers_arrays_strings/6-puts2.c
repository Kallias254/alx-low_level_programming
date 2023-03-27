#include "main.h"

/**
 * puts2 - prints every other character starting from th first
 *@str: string to be modified
 *
 *Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
