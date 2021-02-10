/**
 * print_times_table - print times tables without > 5 or < to 0
 * @n: number of times tables to print
 */
void print_times_table(int n)
{
	int i;

	for (i = 0; i <= n ; i++)
	{
		print_time_table(i, n);
	}
}
