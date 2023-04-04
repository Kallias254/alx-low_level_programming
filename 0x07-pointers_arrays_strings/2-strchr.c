#include "main.h"
#include <stddef.h>

/**
 *_strchr - check for character in a string
 *@s: the string to be checked
 *@c: thecharacter under scrutiny
 *Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
			break;
		}
	}
return (NULL);
}
