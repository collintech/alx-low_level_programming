#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - name of the function
 * strlen - prints the length of a string from the string.h library
 * str - string parameter
 * _putchar function from the header file main.h
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int start = len / 2;

	if (len % 2 != 0)
	{
		start = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
