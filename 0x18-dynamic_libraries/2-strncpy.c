/**
 * _strncpy - copy src strint to dest
 * @dest: destination
 * @src:  source to copy
 * @n:    number of characters to copy
 * Return: char copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i]; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
