/**
 * _memcpy - copy n segment of memory from src to dest
 * @dest: memory destiny
 * @src: Source to copy in dest
 * @n: number of chars to copy
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
