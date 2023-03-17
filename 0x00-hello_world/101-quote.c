#include <stdio.h>

/**
 * main - print to stderr
 * Description - and that piece of art is useful\" - Dor a Korpar, 2015-10-19
 * Return: return 1
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dor a Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", msg);

	return (1);
}
