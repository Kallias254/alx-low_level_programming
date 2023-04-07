#include "main.h"

/**
 *_pow_recursion - the power of an int using recursion
 *@x: x is the base number.
 *@y: y is the power number we are raising to.
 *Return: Return int of the result as an int.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
