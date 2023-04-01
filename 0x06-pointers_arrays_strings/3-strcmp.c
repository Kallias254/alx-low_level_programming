#include "main.h"

/**
 * _strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: pointer to integer result
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;
	int result;

	for (a = 0 ; s1[a] != '\0' ; a++)
		for (b = 0 ; s2[b] != '\0' ; b++)
			if (s1[a] != s2[b])
			{
				if (s1[a] < s2[b])
				{
					result = 15;
				} else
					result = -15;
			}
			else
			{
				result = 0;
			}

return (result);
}
