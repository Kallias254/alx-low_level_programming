#include "main.h"
#include <stdio.h>

/**
 *main - print the number of arguments passed
 *@argc: maintains the number of commandline arguments
 *@argv: the number of string arrays for the function/program
 *Return: Nothing
 */
int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);
	return (0);
}
