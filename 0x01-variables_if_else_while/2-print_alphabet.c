#include <stdio.h>
/**
 *main - the aphabet game
 *Decription: display alphabets in lowercase
 *Return: zero
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
		putchar('\n');

	return (0);
}
