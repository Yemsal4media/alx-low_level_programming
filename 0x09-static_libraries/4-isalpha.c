#include"main.h"

/**
 * _isalpha - function to check if character is alphabetic
 * 
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if true 
 *	else return 0
*/

int _isalpha(int c)
{
	
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
