#include "main.h"

/**
 *jack_bauer - jack bauer 24
 *No return statement
 */
void jack_bauer(void)
{
	int a = '0';
	int b = '0';
	int c;
	int d;

	while (a <= '2')
	{
		b = 0;
		while (b <= '9')
		{
			for (c = '0' ; c <= '5' ; c++)
			{
				for (d = '0' ; d <= '9' ; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(b);
					_putchar(c);
					_putchar('\n');
				}
			}
		b++;
		}
	a++;
	}
}



