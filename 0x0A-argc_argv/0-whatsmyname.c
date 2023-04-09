#include "main.h"
#include <stdio.h>
/**
 *_whatsmyname - print the name of the program to stdout
 *@argv: the commandline string pointers
 *
 *Return: Nothing.
 */
int main(int argc, char **argv)
{
	int i;
	char *str = argv[0];
	(void)argc;

	for (i = 0 ; *str != '\0' ; i++)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
	return (0);
}
