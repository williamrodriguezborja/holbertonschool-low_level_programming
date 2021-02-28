/**
 * _strcpy - copy src string to dest
 * @dest: destination
 * @src: string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] && dest[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
