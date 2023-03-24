#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of time the character \ to be printed
 *
 */
void print_diagonal(int n)
{
	int i;
	char stroke;

	stroke = '\\';
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0 ; i <= n ; i++)
	{
		_putchar(' ');
	}
		_putchar(stroke);
		_putchar('\n');
}
