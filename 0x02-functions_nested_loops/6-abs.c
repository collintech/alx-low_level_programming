#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int print_last_digit(int num);

int main() {
	int num = -354;
	int result;

	result = print_last_digit(num);
	printf("\n");

	return 0;
}

int print_last_digit(int num) {
	int last_digit = num % 10;

	if (last_digit < 0) {
		last_digit *= -1;
	}
	printf("%d", last_digit);
	return last_digit;
}
