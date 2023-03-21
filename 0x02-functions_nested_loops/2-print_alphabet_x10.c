#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 *Returns nothing.
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int alpha10;

	for (i = 0 ; i <= 9 ; i++)
	{
		alpha10 = 'a';
		while (alpha10 <= 'z')
		{
			_putchar(alpha10);
			alpha10++;
		}
			_putchar('\n');
	}
}
