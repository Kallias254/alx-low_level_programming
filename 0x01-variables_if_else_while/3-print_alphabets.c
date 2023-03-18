#include <stdio.h>
/**
 *main - the aphabet game
 *Decription: display alphabets in lowercase
 *Return: zero
 */

int main(void)
{
	char d_a;

	for (d_a = 'a' ; d_a <= 'z' ; d_a++)
		putchar(d_a);

	for (d_a = 'A' ; d_a <= 'Z' ; d_a++)
	{
		putchar(d_a);
	}
		putchar('\n');

	return (0);
}
