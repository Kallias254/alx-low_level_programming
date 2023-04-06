#include "main.h"

/**
 *_strlen_recursion - count the length of a string without null byte
 *@s: input is the string to be counted.
 *
 *Return: Return the length of the string as an int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
