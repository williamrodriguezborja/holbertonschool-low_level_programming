/**
 * _strncpy - copy src strint to dest
 * @dest: destination
 * @src:  source to copy
 * @n:    number of characters to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* while (src[i]) */
	/* 	l++; */

	for (i=0; src[i] && (i < n ); i++)
		dest[i] = src[i];
//	dest[i] = 0;
	return (dest);
}
