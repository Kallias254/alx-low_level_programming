#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates source and dest
 *@s1: destination string
 *@s2: source string
 *@n: number of bytes to take from s2
 *Return: return character pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a;
	int i;
	int j;
	unsigned int k;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (i = 0 ; s1[i] != '\0'; i++)
		a++;
	s3 = malloc(a + n + 1);
	if (s3 == NULL)
		return (NULL);
	for (j = 0 ; s1[j] != '\0' ; j++)
		s3[j] = s1[j];
	for (k = 0 ; k < n ; k++)
		s3[j + k] = s2[k];
	s3[a + k] = '\0';

	return (s3);
}
