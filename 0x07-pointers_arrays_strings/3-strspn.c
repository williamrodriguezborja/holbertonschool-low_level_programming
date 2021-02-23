/**
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j , b = 0;

	for (; s[i] && s[i] !=' '; i++)
	{
		j = 0;

		for (;accept[j]; j++)
		{
			if (accept[j] == s[i])
				b++;
		}
	}

	return (b);
}
