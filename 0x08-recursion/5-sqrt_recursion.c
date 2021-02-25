/**
* _sqrt - compute square root of n number
*/
int _sqrt(int n, int i)
{
	if (n == i) /* base case not found sqrt */
		return 0;
	if (n % i == i)	/* base case success to find sqrt */
		return (i);
	return (_sqrt(n, ++i)); /* recursion */
}
/**
 * _sqrt_recursion - compute sqrt of n with recursion
 * Return: sqrt from n number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return  _sqrt(n);
}
