#include <stdio.h>

void mul_both();
void mul_3();
void mul_5();

/**
 * main - Fizz-Buzz test
 * Return: Always 0 successful.
 *
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
	int result_3 = i % 3;
	int result_5 = i % 5;
	int result_both = i % 15;

	if (result_both == 0)
	{
		mul_both();
		continue;
	} else if (result_3 == 0)
	{
		mul_3();
		continue;
	} else if (result_5 == 0)
	{
		mul_5();
		continue;
	}
		printf("%d", i);
		putchar(' ');
	}
	putchar('\n');
return (0);
}
/**
 * mul_3 - function for multiples of 3
 */
void mul_3()
{
	char out_3[] = "Fizz";

	printf("%s", out_3);
	putchar(' ');
}

/**
 * mul_5 - function for multiples of 5
 */
void mul_5()
{
	char out_5[] = "Buzz";

	printf("%s", out_5);
	putchar(' ');
}

/**
 * mul_both - function for multiples of 5 and 3
 */
void mul_both()
{
	char out_both[] = "FizzBuzz";

	printf("%s", out_both);
	putchar(' ');
}
