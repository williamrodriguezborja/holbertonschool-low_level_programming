/**
 * print_name - this function is wrapper of f function
 * @name: name to print by f function
 * @f: Function that use name
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
