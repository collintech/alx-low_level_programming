#include "main.h"
#include <stdio.h>
/**
 * print_number - name of the function
 * _putchar - a writing function from the header file, main.h
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
