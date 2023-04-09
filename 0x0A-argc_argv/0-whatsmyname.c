#include "main.h"
#include <stdio.h>
/**
 *main - print the name of the program to stdout
 *@argv: the commandline string pointers
 *@argc: the number of argument strings
 *Return: Nothing.
 */
int main(int argc, char **argv)
{
	int i;
	char *str = argv[0];
	(void)argc;

	for (i = 0 ; *str != '\0' ; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
