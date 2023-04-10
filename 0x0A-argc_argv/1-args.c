#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that print a number of argument, 
 *           followed by a new line
 * @argc: holds number of arguments passed
 * @argv: an array pointer to hold the argument passed
 *
 * Return: 0
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
    int i = 0, m;

    while (i < argc)
    {
        m = i;
        i++;
    }
    printf("%d\n", m);
    return (0);
}
