#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - get the product of 2 command line arguments
 *@argc: the number of strings
 *@argv: the string arrays passed as arguments
 *Return: 0 for successful, 1 for error.
 */
int main(int argc, char **argv)
{
	int result;
	int str;
	int str1;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	str = atoi(argv[1]);
	str1 = atoi(argv[2]);

	result = str * str1;
	printf("%d\n", result);
	return (0);
}
