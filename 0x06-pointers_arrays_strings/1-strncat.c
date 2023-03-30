#include "main.h"

/**
 **_strncat - concatenate two strings safely
 *@dest: the destination array
 *@src: the source
 *@n: the index limit on the src
 *Return: resturning the pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
		a++;
	for (b = 0 ; b < n && src[b] != '\0' ; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';
return (dest);
}
