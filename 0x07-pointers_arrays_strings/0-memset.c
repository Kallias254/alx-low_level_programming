#include "main.h"

/**
 *_memset - fill the memory with constant byte.
 *@s: The memory address to be altered.
 *@b: The byte data to be filled into
 *@n: number of bytes to be filled.
 *Return: pointer to the altered memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < (int) n ; i++)
		s[i] = b;
return (s);
}
