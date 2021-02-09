/**
 * _islower -  is lowercase
 * @c: character
 * Return: Returns 1 if c is lowercase or 0 is uppercase
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	return (1);
}
