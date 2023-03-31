include "main.h"

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
	int s;

	for (s = 0 ; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];
	for (; s < n ; s++)
		dest[s] = '\0';
return (dest);
}
