#include "main.h"

/**
 *_strncpy - concatinate 2 strings safely
 *@dest: pointer to destination character array
 *@src: pointer to source character array
 *@n: number of characters to copy
 *
 *Return: Apointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;
	int s;

	for (d = 0 ; dest[d] != '\0' ; d++)
		for (s = 0 ; s < n ; s++)
			dest[s] = src[s];
return (dest);
}
