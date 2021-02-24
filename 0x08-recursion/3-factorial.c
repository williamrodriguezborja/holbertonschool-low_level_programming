/**
 * factorial - return factorial number of n
 * @n: int number to find factorial number
 * Return: factorial number of n
 */
int factorial(int n)
{
	/* edge cases*/
	if (n < 0)
		return (-1);

	/* base case n == 1*/
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
