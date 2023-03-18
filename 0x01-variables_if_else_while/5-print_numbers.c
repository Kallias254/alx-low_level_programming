#include <stdio.h>

/**
 *main - prints all single digit numbers
 *Description: prints all single digit numbers of base 10 from 0
 *Return: program returns a zero (Success)
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		printf("%d", num);
	}
		printf("\n");

	return (0);
}
