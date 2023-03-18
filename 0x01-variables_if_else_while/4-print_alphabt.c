#include <stdio.h>
/**
 *main - the aphabet game
 *Decription: display alphabets in lowercase except q and e
 *Return: zero
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
		putchar('\n');

	return (0);
}
