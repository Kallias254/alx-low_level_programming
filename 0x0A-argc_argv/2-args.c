#include "main.h"
#include <stdio.h>
/**
 *main - prints all arguments
 *@argc: the number of string arguments passed
 *@argv: the actual string arrays
 *Return: 0 always successful.
 */
int main(int argc, char **argv)
{
	int i;
	char *str;

	for (i = 0 ; i < argc ; i++)
	{
		str = argv[i];
		puts(str);
	}
	return (0);
}
