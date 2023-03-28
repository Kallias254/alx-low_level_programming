#include "main.h"

/**
 * puts_half - prints half the string
 *@str: the string to be parsed
 *Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int half;
	int i;
	int n;

	while (str[len] != '\0')
		len++;
	half = len / 2;

	if (len % 2 != 0)
	{
		for (i = (half + 1) ; i <= len ; i++)
		{
			_putchar(str[i]);
		}
	} else
	{
		n = (len + 1) / 2;
		for (i = n ; i <= len ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
