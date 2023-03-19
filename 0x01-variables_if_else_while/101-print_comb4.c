 #include <stdio.h>

/**
 *main - A program that print three number combinations
 *Return: zero
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0' ; a <= '7' ; a++)
	{
		for (b = '1' ; b <= '8' ; b++)
		{
			for (c = '2' ; c <= '9' ; c++)
			{
				if (a != b && b != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
