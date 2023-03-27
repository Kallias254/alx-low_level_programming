#include "main.h"

/**
 * rev_string - reverse a character array
 *@s: the string to be reversed
 *
 *Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
		len++;
	for (i = len - 1 ; i >= 0 ; i--)
		*(s + i);
}
