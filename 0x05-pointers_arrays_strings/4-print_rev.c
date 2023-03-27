#include "main.h"
#include <string.h>
/**
 * strlen -this function finds the lengh of a string from the string.h library
 * print_rev - this function prints a reversed string
 * s - string notifier parameter
 * len - initializes the strlen function
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
