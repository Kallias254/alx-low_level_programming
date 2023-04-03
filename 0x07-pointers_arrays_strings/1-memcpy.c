#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copy memeory area
 *@dest: destination memory area
 *@src: source data
 *@n: number of bytes to be copied to destination
 *Return: altered memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
return (dest);
}
