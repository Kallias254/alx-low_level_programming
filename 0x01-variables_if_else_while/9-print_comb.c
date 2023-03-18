#include <stdio.h>

/**
 *main - single digit numbers printing
 *Return: 0 Success
 *
 */
int main(void)
{
	int s_d;

	for (s_d = '0' ; s_d <= '8' ; s_d++)
	{
		putchar(s_d);
		putchar(',');
		putchar(' ');
	}
	putchar(s_d);
return (0);
}
