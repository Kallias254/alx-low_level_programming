#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: the size of the memory to be allocated
 *Return: Return nothing
 */
void *malloc_checked(unsigned int b)
{
	void *m;
	m = malloc(b * sizeof(unsigned int));

	if (m == NULL)
		exit(98);

	return (m);
}
