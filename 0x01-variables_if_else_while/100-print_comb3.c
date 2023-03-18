#include <stdio.h>
/**
 *main - combination of digits
 *Return: 0 success
 */

int main(void)
{
int i;
int j;

for (i = 0; i <= 8; i++)
{
	for (j = 1; j <= 9; j++)
	{
		if (j != i && j > i)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
}
	return (0);
}
