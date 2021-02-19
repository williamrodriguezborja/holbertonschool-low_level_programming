/**
 * reverse_array - reverse n position in array;
 * @a: array
 * @n: size
  */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, tmp;

	for (; start < end && start < n; start++, end--)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
	}
}
