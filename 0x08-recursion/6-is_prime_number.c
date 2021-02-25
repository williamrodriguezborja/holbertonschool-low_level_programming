/**
 * is_divisible - is a recursive function that search if n is number divisible
 *                in i number
 * @n: Number to find if be divisible by n
 * @i: iterator number that check if is divisible n number
 * Return: 0 o 1 is divisible
 */
int is_divisible(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i != 0)
		return (is_divisible(n, ++i));
	return (0);
}

/**
 * is_prime_number - find if number is prime;
 * @n: number to search if is
 * Return: 0 or 1 is n is prime number
 */
int is_prime_number(int n)
{
	/* prime number is number that is only */
	if (n < 2)
		return (0);

	if (n % 2 == 0)
		return (0);
	return (is_divisible(n,  2));
}
