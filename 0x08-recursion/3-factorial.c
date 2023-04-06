#include "main.h"

/**
 *factorial - resturn the factorial of a given number
 *@n: the number to be factored
 *
 *Return: Returns an integer which is the factorial of the number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
