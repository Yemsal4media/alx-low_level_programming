#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - To check if string array is number
 *
 * @num: string to check
 *
 * Return: 0 if it is a number
 * 	   1 if it is not a number
 */

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit (num[i]))
			return (1);
	}
	return (0);
}

/**
 * main - To add positive nums
 *
 * @argc: holds the number of argument passed
 * @argv: array pointer that holds the argument passed 
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%dd\n", sum);
	}
	return (0);
}
