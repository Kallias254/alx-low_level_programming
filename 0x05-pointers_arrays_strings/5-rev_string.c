#include "main.h"
/**
 * rev_string - reverse a character array
 *@s: the string to be reversed
 *
 *Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;/*Find the length of the string*/
	int i = 0;
	int j = len - 1;
	char temp;

	while (s[len] != '\0')
		len++;

	while (i < j)
	{
	/*Swap s[i] and s[j]*/
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	/*Move i and j towards the middle*/
		i++;
		j--;
	}
}
