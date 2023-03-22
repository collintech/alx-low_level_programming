#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0) {
		_putchar('+');
		return (1);
	} else if (n == 0) {
		_putchar('0');
		return (0);
	} else {
		_putchar('_');
		return (-1);
	}
}

int main(void)
{
	int n = 10;
	int sign;

	sign = print_sign(n);

	if (sign > 0) {
		_putchar(' ');
		_putchar('n');
		_putchar('u');
		_putchar('m');
		_putchar('b');
		_putchar('e');
		_putchar('r');
		_putchar(' ');
		_putchar(n + '0');
		_putchar(' ');
		_putchar('i');
		_putchar('s');
		_putchar(' ');
		_putchar('p');
		_putchar('o');
		_putchar('s');
		_putchar('i');
		_putchar('t');
		_putchar('i');
		_putchar('v');
		_putchar('e');
		_putchar('\n');
	} else if (sign == 0) {
		_putchar(' ');
		_putchar('z');
		_putchar('e');
		_putchar('r');
		_putchar('o');
		_putchar('\n');
	} else {
		_putchar(' ');
		_putchar(n + '0');
		_putchar(' ');
		_putchar('i');
		_putchar('s');
		_putchar(' ');
		_putchar('n');
		_putchar('e');
		_putchar('g');
		_putchar('a');
		_putchar('t');
		_putchar('i');
		_putchar('v');
		_putchar('e');
		_putchar('\n');
	}
	return (0);
}
