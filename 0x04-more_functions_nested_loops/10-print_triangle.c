#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
	char shebang;
	int i;
	int j;
	int k;

	shebang = '#';

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = size - 1 ; j > 1 ; j--)
			{
				_putchar(' ');
			}
			for (k = 1 ; k <= i ; k++)
			{
				printf("%c", shebang);
			}
				_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
