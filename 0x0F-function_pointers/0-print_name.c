/**
 * print_name - function to print name as in
 *
 * @name: name to print
 * @f: function to return nothing
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
