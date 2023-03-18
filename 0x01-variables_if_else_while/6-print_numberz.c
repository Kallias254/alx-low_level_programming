#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints all single digit numbers
 *Description: prints all single digit numbers of base 10 from 0
 *Return: program returns a zero (Success)
 */

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
		putchar('\n');

	return (0);
}
