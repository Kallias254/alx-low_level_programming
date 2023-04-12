#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenate dest and source  strings
 *@s1: destination string
 *@s2: source string
 *Return: Return a pointer to the newly created memory
 */
char *str_concat(char *s1, char *s2)
{
	int length = 0;
	int length2 = 0;
	int i;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
		length++;
	for (i = 0 ; s2[i] != '\0'; i++)
		length2++;
	ptr = malloc(sizeof(char) * (length + length2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];
	for (i = 0 ; s2[i] != '\0'; i++)
	{
		ptr[length] = s2[i];
		length++;
	}
	ptr[length] = '\0';
return (ptr);
}
