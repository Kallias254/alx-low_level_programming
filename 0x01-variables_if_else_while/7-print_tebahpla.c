#include <stdio.h>
/**
 *main - the aphabet game
 *Decription: display alphabets in lowercase
 *Return: zero
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
