#include "main.h"

/**
 *_islower - prints out if subject is lowesrcase
 *@c: character to be checked
 *
 *Description: checks for lowercase orotherwise
 *Return: 0 for otherwise, 1 for lowecase.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
		return (0);

}
