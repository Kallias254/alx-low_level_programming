#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - add commandline arguments
 *@argc:
 *@argv:
 *
 *Return: 0 always successful
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) >= 1)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	}
return (0);
}
