#include <stdio.h>
/**
 *main - combination of digits
 *Return: 0 success
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = '0' ; a <= '8' ; a++)
	{
		for (b = '1' ; b <= '9' ; b++)
	{
		if (b > a && b != a)
		{
			putchar(a);
			putchar(b);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
