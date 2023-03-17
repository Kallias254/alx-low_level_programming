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

	printf("Size of a char: %ld byte(s)\n", sizeof(b));
	printf("Size of an int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(e));
	printf("Size of a float: %ld byte(s)\n", sizeof(c));
	return (0);
}
