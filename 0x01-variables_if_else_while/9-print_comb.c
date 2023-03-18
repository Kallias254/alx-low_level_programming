#include <stdio.h>

/**
 *main - single digit numbers printing
 *Return: 0 Success
 *
 */
int main(void)
{
	int s_d;

	for (s_d = '0' ; s_d <= '9' ; s_d++)
	{
		
			putchar(s_d);
		if (s_d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
