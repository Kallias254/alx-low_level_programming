#include "main.h"
#include <stdio.h>

/**
 *string_toupper - change lowercase letter to uppercase
 *@str: character to be compared
 *
 *Return: characters translated
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	str[i] = str[i];
	}
return (str);
}
