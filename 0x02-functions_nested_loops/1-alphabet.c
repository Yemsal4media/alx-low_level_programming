#include"main.h"
#include <stdio.h>

/**
 * _putchar - Using _putchar to print alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
