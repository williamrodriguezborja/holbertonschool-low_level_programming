/**
 * _strlen_recursion - find length of the string and return this length.
 * @s: string for find length
 * Return: length of string s
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - check if palindrome with recursion
 * @text: to check if palindrome
 * @start: manage order left to right
 * @end: manage order right to left
 * Return: 0 or 1 if is palindrome
 */
int check_palindrome(char *text, int start, int end)
{
	if (text[start] != text[end])
		return (0);
	if (start > end)
		return (1);
	return (check_palindrome(text, ++start, --end));
}

/**
 * is_palindrome - check if s string is equal left to right that right to left
 * @s: string to check
 * Return: 0 or 1 if s is palindrome world
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
