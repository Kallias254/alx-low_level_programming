#include "main.h"
#include <stdio.h>
int _putchar(char c);

/**
 *reverse_array - reverses the array presented
 *@a: name of the array
 *@n: length of the array
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1 ; i >= 0 ; i--)
	{
		printf("%d", a[i]);
		if (i > 0)
			printf(", ");
	}
	putchar('\n');
}
