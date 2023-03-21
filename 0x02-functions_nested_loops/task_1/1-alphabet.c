#include "main.h"
/**
 *print_alphabet- prints the whole alphabet
 *No return statement
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
