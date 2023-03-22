#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: character to be checked
 *
 *Description: either alphabet or non alphabet
 *Return: 0 or 1.
 */
int _isalpha(int c)
{
	if ((c => 65 && c <= 90) || (c => 97 && c <= 122))
	{
		return (1);
	} else
		return (0);
}
