#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Throws out the last digit
 *Description: Random's number last digit and value
 *Return: zero
 */
int main(void)
{
	int n;
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = abs(n) % 10;
	if (n > 5)
	{
		printf("The last digit of %d is +%d and is greater than 5\n", n, l_d);
	}
	else if (n == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, l_d);
	}
	else if (n < 6 && n != 0)
	{
		printf("The last digit of %d is -%d and is less than 6 and not 0\n", n, l_d);
	}

	return (0);
}
