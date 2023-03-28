#include "main.h"

/**
 * puts_half - prints half the string
 *@str: the string to be parsed
 *Return: nothing
 */
void puts_half(char *str)
{
	int len = 0
	
	while(*str != '\0')
		len++
	half = len / 2;
	
	if (half % 2 != 0)
	{
		for (i = half ; i <= len ; i++)
		{
			_puts(str);
		}
	} else 
	{
		n = (length_of_the_string - 1) / 2;
		_puts(n);
	}
}
