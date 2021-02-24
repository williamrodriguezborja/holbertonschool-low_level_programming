/**
 * _strlen_recursion - find length of the string and return this length.
 * @s: string for find length
 * Return: length of string s
*/
int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
