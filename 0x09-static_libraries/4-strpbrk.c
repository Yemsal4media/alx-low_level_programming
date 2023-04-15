/**
 * _strpbrk - This is a function that searches a
 *            string for any of a set of bytes.
 *
 * @s: pointer to input string
 * @accept: pointer to string we searching for in @s
 *         
 *
 * Return: pointer to the bytes in @s
 *         Return NULL if no such byte
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
