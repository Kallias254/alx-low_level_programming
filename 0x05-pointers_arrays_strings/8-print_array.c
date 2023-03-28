#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array of integers, then a new line.
 *@a: pointer to the array name
 *@n: the length of the array
 *Return: nothing
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if ((n - i) > 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
