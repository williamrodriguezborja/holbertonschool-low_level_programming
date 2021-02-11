/**
 * _isdigit - evaluate is character is digit or not
 * @c: int character.
 * Return: 1 is digit or 0 isn't.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
