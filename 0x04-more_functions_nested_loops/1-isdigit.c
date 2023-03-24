#include "main.h"

/**
 *_isdigit - check for a digit
 *@c: the digit to be checked
 *Return: returns 0 or 1
 */
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	{
		result = 1;
	} else
		result = 0;
	return (result);
}
