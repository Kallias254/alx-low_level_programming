#include "main.h"

/**
 *_strspn - functions that returns the prefix of a subsubstring.
 *@s: the string we will be traversing.
 *@accept: the items we will be serching in the home string.
 *Return: unsigned integer of the length of the chars with their matches.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
return (count);
}
