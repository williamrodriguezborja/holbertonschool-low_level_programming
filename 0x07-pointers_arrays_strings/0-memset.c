/**
 * _memset - set first n bytes in memory in s with b
 * @s: pointer to data to fill
 * @b: content to fill s pointer
 * @n: number of times to repeat b character in s pointer
 * Return: s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
