#include "main.h"

/**
 * more_numbers - print x10 the numbers 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int i;
	int nums;

	for (i = 0 ; i <= 9 ; i++)
	{
		nums = 0;
		while (nums <= 14)
		{
			if (nums >= 10)
			{
			_putchar((nums / 10) + '0');
			}
			_putchar((nums % 10) + '0');
			nums++;
		}
		_putchar('\n');
	}
}
