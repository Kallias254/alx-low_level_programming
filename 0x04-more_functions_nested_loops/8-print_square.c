#include "main.h"

/**
 *print_square - print a square followed by a new line
 *@size: size of the square
 *
 */
void print_square(int size)
{
	char shebang = '#';
	int rows = 0;
	int i;
	
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (rows < size)
		{
			for (i = 0 ; i < size ; i++)
			{
				_putchar(shebang);
			}
			_putchar('\n');
			rows++;
		}
	}
}
