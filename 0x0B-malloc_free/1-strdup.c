#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function that duplicates a string
 *@str: the string to be duplicated
 *
 *Return: a character pointer to the new memory
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		length++;
	ptr = malloc(length * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i <= length ; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
