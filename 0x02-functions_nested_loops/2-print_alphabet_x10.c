#include"main.h"

/**
 * print_alphabet_x10 - to print alphabet 10x
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
