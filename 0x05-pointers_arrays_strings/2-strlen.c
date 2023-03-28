#include "main.h"

/**
 * _strlen - return the length of a string.
 *@s: the string array passed
 * Return: Always 0 successful.
 *
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
