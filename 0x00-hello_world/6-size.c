#include <stdio.h>

/**
 * main - Write a C program
 *
 * Description: Prints the various types
 * Return: The program should return 0
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("Size of a char: %ld bytes(s)\n", sizeof(b));
	printf("Size of a int: %ld bytes(s)\n", sizeof(a));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(d));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(e));
	printf("Size of a float: %ld bytes(s)\n", sizeof(c));
	return (0);
}
