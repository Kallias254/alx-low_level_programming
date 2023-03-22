/**
 *print_last_digit - print the last digit of a number
 *@n: the integer to be checked
 *Return: The value of the last digit
 *
 */
int print_last_digit(int n)
{
	if (n < 0)
		return (-n % 10);
	else if (n == 0)
		return (0);
	else
		return (n % 10);
}
