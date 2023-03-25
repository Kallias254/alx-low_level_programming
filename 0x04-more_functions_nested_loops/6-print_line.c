#include "main.h"

/**
 *print_line - draw a straight line in the terminal
 *@n: the number of times the character _ should be printed
 *
 *
 */
void print_line(int n)
{
	char line = '-';
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar(line);
		}
			_putchar('\n');
	}
}
