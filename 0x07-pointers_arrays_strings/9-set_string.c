/**
 * set_string - set one string to other
 * @s: string to copy
 * @to: string destiny
 */
void set_string(char **s, char *to)
{
	int i = 0;

	for (; s[i] != to; i++)
	{
		s[i] = to;
	}
}
