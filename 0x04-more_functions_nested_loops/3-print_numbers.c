#include "main.h"

/**
 * print_numbers - print nubers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int nums;

	for (nums = 0 ; nums <= 9 ; nums++)
	{
		_putchar('0' + nums);
	}
	_putchar('\n');
}
