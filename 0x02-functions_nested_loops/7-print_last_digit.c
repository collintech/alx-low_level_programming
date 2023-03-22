#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int print_last_digit(int num);

int main()
{
	int x = 1234;
	int y = -5678;

	print_last_digit(x);
	print_last_digit(y);

	return (0);
}

int print_last_digit(int num) {

	int last_digit = abs(num) % 10;
	printf("The last digit of %d is %d\n", num, last_digit);
	return last_digit;
}
