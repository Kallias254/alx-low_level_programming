/**
 *_isupper - checks uppercase character
 *@c: the character being checked.
 *Return: 0 or 1 if uppercase.
 *
 */
int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	} else
		result = 0;
	return (result);
}
