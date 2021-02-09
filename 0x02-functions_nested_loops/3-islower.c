/**
 * _islower -  is lowercase
 * @c: character
 * Return: Returns 1 if c is lowercase or 0 is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
