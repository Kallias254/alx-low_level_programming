#include <stdio.h>

/**
 *main - base 16 in lowercase
 *Description: print all numbers and a new line
 *Return: zero
 */
int main(void)
{
	char over10;
	int prefix;

	for (prefix = '0' ; prefix <= '9' ; prefix++)
		putchar(prefix);
	for (over10 = 'a'; over10 <= 'f' ; over10++)
		putchar(over10);
	putchar('\n');
	return (0);
}

