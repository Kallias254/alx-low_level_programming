#include "main.h"

/**
 *print_last_digit - print the last digit of a number
 *@n: the integer to be checked
 *Return: The value of the last digit
 *
 */
int print_last_digit(int n)
{
	int last_digit;
	last_digit = (n % 10);

	if (last_digit < 0)
	{
		last_digit = (last_digit / -1);
		_putchar('0' + last_digit);
	}
	else if (last_digit == 0)
	{
		_putchar('0' + last_digit);
	}
	else if (last_digit > 0)
	{
		_putchar('0' + last_digit);
	}
	return (_putchar('0' + last_digit));
}
