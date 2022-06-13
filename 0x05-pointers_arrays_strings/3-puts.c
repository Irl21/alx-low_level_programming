#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints a string
 * @str: input
 * Return: always 0
 */

void _putchar(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	puthcar('\n');
}

