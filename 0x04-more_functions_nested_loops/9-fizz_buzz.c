#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: Always 0 successful.
 *
 */
int main(void)
{
	int i;
	char out_3[] = "Fizz";
	char out_5[] = "Buzz";
	char out_both[] = "FizzBuzz";
	
	for (i = 1 ; i <= 100 ; i++)
	{
	int result_3 = i % 3;
	int result_5 = i % 5;
	int result_both = i % 15;

	if (result_3 > 0)
	{
		printf("%c", out_3[]);
		mul_3(i);
	} else if (result_5 > 0)
	{
		printf("%c", out_5[]);
		mul_5(i);
	} else if (result_both > 0)
	{
		printf("%c", out_both[]);
		mul_both(i);
	}
		printf("%d", i);
		putchar(' ');
	}
	putchar('\n');
return (0);
}
/**
 * mul_3: function for multiples of 3
 *@i: for function 3
 */
void mul_3(int i)
{
	char out_3[] = "Fizz";
	printf("%c", out_3);
}

/**
 * mul_5 function for multiples of 5
 *@i: for function 5
 */
void mul_5(int i)
{
	char out_5[] = "Buzz";
	printf("%c", out_5);
}

/**
 * mul_both function for multiples of 5 and 3
 *@i: for function 5 and 3
 */
void mul_both(int i)
{
	char out_both[] = "Buzz";
	printf("%c", out_both);
}
