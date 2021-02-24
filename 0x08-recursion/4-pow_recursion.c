/**
 * _pow_recursion - calculate power of x to y
 * @x: number to power
 * @y: y number to times
 * Return: pow of x elevate to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
