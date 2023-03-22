#include "main.h"

/**
 *jack_bauer - jack bauer 24
 *
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0' ; a <= '2' ; a++)
	{
		b = '0';
		for (b = '0' ; b <= '3' ; b++)
		{
			c = 0;
			for (c = '0' ; c <= '5' ; c++)
			{
				d = '0';
				for (d = '0' ; d <= '9' ; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}


			}
		}
	}
}



