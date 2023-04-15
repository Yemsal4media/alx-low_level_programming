/**
 * _strstr - This is a function that locates a substring
 *
 * @haystack: input string to search for matching
 *
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring
 *         And if substring not found, Return NULL
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
