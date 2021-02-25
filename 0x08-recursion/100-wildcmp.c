/**
 * wildcmp - compare to string with recursion
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1 is are equals
 */
int wildcmp(char *s1, char *s2)
{
	/* base case */
	if (!*s1  &&  !*s2) /* s1 when is == '\0' && s2 when == '\0' */
		return (1);
	/* if is equal */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (!*s2)
		return (0);
	if (!*s1 &&  *s2 != '*')
		return (0);
	if (!*s1 &&  *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
