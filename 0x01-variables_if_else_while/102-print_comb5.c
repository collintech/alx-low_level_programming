#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of two-digit numbers
 *
 */

int main() {
	int i, j, num1, num2, num3, num4;
	for (i = 0; i < 100; i++) {
		for (j = i; j < 100; j++) {
			if (i == 0 && j == 0) {
				/* skip the first 00 combination */
				continue;
			}
			num1 = i / 10;
			num2 = i % 10;
			num3 = j / 10;
			num4 = j % 10;
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(' ');
			putchar(num3 + '0');
			putchar(num4 + '0');
			if (i != 99 || j != 99) {
				putchar(',');
				putchar(' ');
			}
		}
	}

	/*  Always 0 (Success) */
	return 0;
}
