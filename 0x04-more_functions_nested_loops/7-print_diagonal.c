#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of time the character \ to be printed
 *
 */
void print_diagonal(int n)
{
	int i;
	int b;
	char stroke;
	int spaces = 0;

	stroke = '\\';
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
	for (i = 0 ; i < n ; i++)
	{
		for (b = 0 ; b <= spaces ; b++)
		{
			if (b != 0)
				_putchar(' ');
		}
		_putchar(stroke);
		_putchar('\n');
		spaces++;
	}
	}
}
