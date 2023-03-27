#include "main.h"

/**
 * swap_int - swaps the two integer values
 *@a: pointer for param a
 *@b: pointer for param b
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
