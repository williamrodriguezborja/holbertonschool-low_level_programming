/**
 * _strspn - count characters equals since find space
 * @s: String to find accept characters and count yours consist before space
 * @accept: characters to count
 * Return: number of consist before spaces.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, b = 0;

	for (; s[i] && s[i] != ' '; i++)
	{
		j = 0;

		for (; accept[j]; j++)
		{
			if (accept[j] == s[i])
				b++;
		}
	}

	return (b);
}
