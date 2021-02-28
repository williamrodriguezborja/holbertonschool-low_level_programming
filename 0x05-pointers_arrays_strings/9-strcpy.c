/**
 * _strcpy(char *dest, char *src)
 * @dest:
 * @src
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];

	return (dest);
}
