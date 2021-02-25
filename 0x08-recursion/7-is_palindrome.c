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
	if (start < end)
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
	int length = 0;
	if (*s == '\0')
		return (0);
	for (; s[length]; length++)
	{
	}
	return (check_palindrome(s, 0, length - 1));
}
